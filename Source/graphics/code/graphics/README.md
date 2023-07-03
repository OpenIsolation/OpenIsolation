# Alien: Isolation - Graphics - Overview
## Graphics APIs
Alien: Isolation's renderer supported multiple different graphics APIs.

### Known supported graphics APIs
| Platform      | Graphics API             |
|---------------|--------------------------|
| Windows       | DX11[^1]                 |
| Linux         | DX11 (Wrapped to OpenGL) |
| Mac           | DX11 (Wrapped to OpenGL) |
| iOS           | DX11 (Wrapped to Metal)  |
| Android       | DX11 (Wrapped to OpenGL) |
| PlayStation 4 | GNM                      |
[^1]: There is logic in this library to override some settings (such as Depth of Field) for non-DX11 devices.
  It's possible DX10 support was planned at one point, as there is a _feature level_ enumeration entry for it.

Feral Interactive opted for using an in-house DirectX wrapper library called *inDirectX*, to save having to write new
GFX API code.

A former developer confirmed that, after *Alien: Isolation*'s release, they continued working on the renderer and 
engine, upgrading the renderer to support DirectX 12, and further improving the multiplayer code.

This upgraded renderer would later be used in *Halo Wars 2*.
