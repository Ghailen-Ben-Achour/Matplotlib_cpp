cmake_minimum_required(VERSION 3.14)

project(PLOT)


set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS}")

add_executable(main src/matplotlib.cpp
                    include/matplotlibcpp.h
                   )

target_include_directories(main PRIVATE include
			main /usr/include/eigen3
			main PRIVATE /home/ghailen/anaconda3/include/python3.7m
			main PRIVATE /home/ghailen/anaconda3/lib/python3.7/site-packages/numpy/core/include)


target_link_libraries(main /home/ghailen/anaconda3/lib/libpython3.7m.so)


set_property(TARGET main PROPERTY CXX_STANDARD 14)
