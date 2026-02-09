cmake_minimum_required(VERSION 3.10)
project(Point2D_Library)

# Библиотека
add_library(Point2D STATIC src/Point2D.cpp)
target_include_directories(Point2D PUBLIC include)

# Приложение
add_executable(Point2D_App app/main.cpp)
target_link_libraries(Point2D_App Point2D)