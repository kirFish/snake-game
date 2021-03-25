//
// Created by Kirill Fishchuk on 02.03.2021.
//

#ifndef SNAKEGAME_SNAKE_H
#define SNAKEGAME_SNAKE_H


#include "coordinate.h"

class Snake {


    private:
        int length;

        Coordinate* currentPosition;
        //head of the snake is located at the last point of array
        //I added to have more understandable code when i will check if head collides with something
        Coordinate headPosition;

    public:
        Snake(int length);
};


#endif //SNAKEGAME_SNAKE_H
