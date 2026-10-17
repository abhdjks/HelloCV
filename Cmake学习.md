一.意义

cmake可以让程序在不同的运行环境下运行，利用结构化管理文件夹，可以使主要交互页面和库函数分开，在大型工程开发中有利于分工合作。



二.主要流程

1.将写好的主代码和主要文件放在同一个总文件夹下面

2.编写合适的CMakeLists文档

3.主文件夹下再新建build文件夹

4.打开终端，在build文件夹下输入以下代码

5.最后输入运行程序

```plain
cd build
cmake ..
make
./Demo(文件名)
```

三.库函数

库函数和头文件放在另一个文件夹下面，易于管理

子文件夹下仍然需要有一个写cmakelist文件，这个文件是服务于库函数的

```plain
add_library(unitlib src/unitlib.cpp)

target_include_directories(unitlib PUBLIC include)
```

  将头文件路径暴露给外部

```plain
target_include_directories()
```

四.文件书写

1.Cmakelist文件中要写的内容包括

   最低版本信息

   项目名称：给项目取个名字

   生成可执行文件

```plain
cmake_minimum_required(VERSION 3.10)

project(UnitConverter)

add_executable(Demo src/main.cpp)
```

2.有些时候还需要链接库，此时需要添加子文件夹，再链接到对应库函数

```plain
add_subdirectory(unitlib)

target_link_libraries(Demo PRIVATE unitlib)
```

3.子文件夹下仍然需要有一个写list文件，这个文件是服务于库函数的

```plain
add_library(unitlib src/unitlib.cpp)

target_include_directories(unitlib PUBLIC include)
```

  将头文件路径暴露给外部

```plain
target_include_directories(unitlib PUBLIC include)
```

4.如果需要查找外部函数，就要写以下内容



    但要配合语句使用



5.对于特定目标可能需要置于某种状态，并赋予链接它的目标同种状态，需要写宏定义



五.安装

如果要在任何地方使用某库函数，就要安装

