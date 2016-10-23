cmake_minimum_required(VERSION 2.8)#这是在声明最小的版本号
	project(helloworld)#项目名称
#	add_executable(hello helloworld.cpp)#生成的可执行文件
	aux_source_directory(. DIR_SRC)
	add_executable(hello ${DIR_SRC})
