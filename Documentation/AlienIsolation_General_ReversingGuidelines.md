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
