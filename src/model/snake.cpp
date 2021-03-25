//
// Created by Kirill Fishchuk on 02.03.2021.
//

#include "snake.h"

//basic characteristics of the snake at the start of the game
const static int basicLength = 5;
const static int initialPositionX = 0;
const static int initialPositionY = 0;

Snake::Snake(int length) : length(length) {
    this->currentPosition = new Coordinate[basicLength];
    for (int i = 0; i < length; ++i) {
        currentPosition[i].x = initialPositionX + i;
        currentPosition[i].y = initialPositionY;
    }

    this->headPosition = currentPosition[length];
}
