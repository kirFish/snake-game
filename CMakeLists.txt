cmake_minimum_required(VERSION 3.17)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(SnakeGame src/main.cpp src/model/snake.cpp src/model/snake.h src/model/field.cpp src/model/field.h src/model/food.cpp src/model/food.h src/model/obstacle.cpp src/model/obstacle.h src/model/coordinate.cpp src/model/coordinate.h src/controller/input.h src/view/console/viewBuilder.h)