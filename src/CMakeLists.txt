cmake_minimum_required(VERSION 3.21)

add_executable("module_27_task_2"
        main.cpp
        vector2dDouble.cpp
        geometric_figure.cpp
        GFRectangle.cpp
        GFCircle.cpp
        GFSquare.cpp
        GFTriangle.cpp)

target_include_directories("module_27_task_2" PUBLIC ${MY_INCLUDE_DIR})
