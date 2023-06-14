# Alien: Isolation - General - Reversing Guidelines
## Reversing classes that inherit from other classes
When you're reversing a class, there will typically be a *vtable*, *typeinfo* and *typeinfo-name* global variable inside each class.

It's best to check the *typeinfo*, to find out what class (if any), each class inherits from.

For instance, take the class `PACK_FILE_IN`, here is the *typeinfo* for this class:

```
0x90 20 96 56   addr  __cxxabiv1::__si_class_type_info::vtable
     05 01 00 
     00 00
0x98 84 25 db   addr  typeinfo-name
     01 01 00 
     00 00
0xa0 c8 5b 47   addr  FILE_IN_INTERFACE::typeinfo
     02 01 00 
     00 00
```

This tells us a couple of things about this class:
* The presence of `__si_class_type_info` tells us that, this is a class that inherits from only one non-virtual  base class (See [GCC CXXABI](https://github.com/gcc-mirror/gcc/blob/master/libstdc++-v3/libsupc++/cxxabi.h) for details on possible values for `*_class_type_info`).
* The base class is `FILE_IN_INTERFACE`.

## Figuring out the true size of a memory structure or an instance of class
When you are reversing a structure in Ghidra, it might semi-accurately guess how big the structure is, but it rarely gets it exactly right without a lot of assistance from the reverse-engineer.

At least in _Alien: Isolation_'s case - there is a pattern that you can refer to, to determine the true size of such structures.

You might come across this pattern in the decompiled C code:
```c
MyNiceClass* myNiceClassMemoryPool = (MyNiceClass*)_Znwm(0x40);
```

`_Znwm` is the mangled name of `operator new` in C++.
A rough translation of the above example, from C to C++, would look something like this:

```c++
MyNiceClass* myNiceClassInstance = new MyNiceClass();
```

`_Znwm` only takes one parameter, which is the desired size of a memory block, to hold an instance of that class.
So we know that, in this case, `MyNiceClass` has a size of `0x40` (64), and we can update Ghidra's auto-generated struct size accordingly.

An alternative pattern that you might come across, is this:
```c
void* myMemoryPool;
// Resort to an aligned malloc syscall if we haven't created a hook for this yet.
if (CA::ca_malloc_aligned_hook == (void*)0x0) {
     myMemoryPool = _aligned_malloc(0x40, 16);
else {
     myMemoryPool = CA::ca_malloc_aligned_hook(0x40, 16);
}
```
