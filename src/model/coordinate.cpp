//
// Created by Kirill Fishchuk on 02.03.2021.
//

#include "coordinate.h"

Coordinate::Coordinate(bool isBusy) : isBusy(isBusy) {}

Coordinate::Coordinate(unsigned char x, unsigned char y) : x(x), y(y) {}
