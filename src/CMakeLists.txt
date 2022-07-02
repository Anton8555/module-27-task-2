cmake_minimum_required(VERSION 3.21)

add_executable("module_27_task_2"
        main.cpp
        vector2dDouble.cpp
        GFRectangle.cpp
        GFCircle.cpp)

target_include_directories("module_27_task_2" PUBLIC ${MY_INCLUDE_DIR})
