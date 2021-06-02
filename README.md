# Hashtopolis Stdin Cracker

Generic cracker for Hashtopolis that supports hashcat in stdin mode.


## Building

To build you need at least the Qt5 Core libraries installed.

```
sudo apt-get install qt5-default build-essential
```

### Using qmake

Build with using qmake and make:

```
cd cracker
qmake cracker.pro
make
```

### Using cmake

Note that on Windows you need to adjust the Qt installation location in CMakeLists.txt
Build with using cmake and make:

```
mkdir build
cd build
cmake ..
make
```
