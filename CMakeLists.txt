cmake_minimum_required(VERSION 4.0)
project(c___prac)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(c___prac
        HelloWorld.cpp utils/source.cpp
        Return_String.cpp
        Return_String.h
        Textbox.cpp
        Textbox.h
        Bankaccount.cpp
        Bankaccount.h
        classes/main.cpp
)

add_executable(lab_tasks lab_tasks.cpp)
add_executable(new_target classes/class_how.cpp classes/class_how.h classes/main.cpp)
