//
// Created by Kirill Fishchuk on 02.03.2021.
//

#ifndef SNAKEGAME_COORDINATE_H
#define SNAKEGAME_COORDINATE_H


class Coordinate {

public:
    unsigned char x;
    unsigned char y;
    bool isBusy = false;

    Coordinate() = default;

    Coordinate(bool isBusy);

};

#endif //SNAKEGAME_COORDINATE_H
