# Matplotlib_cpp
This work is base on [this repository](https://github.com/lava/matplotlib-cpp). The idea is to provide an easier implementation of matplotlibcpp for the users.

# Usage
In order to work with matplotlibcpp, ```2dplot``` folder contains a basic implementation of the library. The CMake file contains these commands that need to be changed according to your path.

```cmake
target_include_directories(main PRIVATE include
			   main PRIVATE /home/ghailen/anaconda3/include/python3.7m
			   main PRIVATE /home/ghailen/anaconda3/lib/python3.7/site-packages/numpy/core/include)

target_link_libraries(main /home/ghailen/anaconda3/lib/libpython3.7m.so)

```

Once paths are set, you can build and excecute by accessing to ```2dplot`` folder and running the following commands.
```bash
mkdir build && cd build
cmake ..
make
./main
```

![Image](https://github.com/Ghailen-Ben-Achour/Matplotlib_cpp/blob/main/images/2dplot.png)
