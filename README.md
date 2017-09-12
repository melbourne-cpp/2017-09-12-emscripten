# Emscripten

Just some notes, and sample code for the [Melbourne C++ Meetup](https://www.meetup.com/preview/MelbourneCpp)'s
[Emscripten and C++](https://www.meetup.com/preview/MelbourneCpp/events/242391568) talk.

## Building

### Emscripten

```
git clone https://github.com/juj/emsdk.git
cd emsdk
./emsdk update-tags
./emsdk list
./emsdk install sdk-tag-1.37.21-64bit
./emsdk activate sdk-tag-1.37.21-64bit
```

### Basic Examples

```
. ~/.../emsdk-portable/emsdk_env.sh
make 01.html
```

```
. ~/.../emsdk-portable/emsdk_env.sh
em++ -o 01.html 01.cpp
```

### qt5-emscripten

```
git clone https://github.com/lpotter/qt5-emscripten.git
cd qt5-emscripten
git checkout wm
. ~/.../emsdk-portable/emsdk_env.sh
./configure -xplatform emscripten -confirm-license -opensource -nomake tests  -nomake examples -developer-build -no-dbus -no-thread
make
```

### Qt5 Examples

```
cd qt-0x
~/.../qt5-emscripten/bin/qmake CONFIG+=release
make
```

## Links

* https://github.com/kripken/emscripten/wiki/Porting-Examples-and-Demos
