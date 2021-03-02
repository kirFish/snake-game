cmake_minimum_required(VERSION 3.17)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(SnakeGame src/main.cpp src/Model/snake.cpp src/Model/snake.h src/Model/field.cpp src/Model/field.h src/Model/food.cpp src/Model/food.h src/Model/obstacle.cpp src/Model/obstacle.h src/Model/point.cpp src/Model/point.h)