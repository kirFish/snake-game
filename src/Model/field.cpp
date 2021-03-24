//
// Created by Kirill Fishchuk on 02.03.2021.
//

#include <iostream>
#include "field.h"

using namespace std;

void Field::print() {

    cout << endl;
    cout << "The size of the field is: " << this->size << endl;
    cout << "The length of the field is: " << this->length << endl;
    cout << "The width of the field is: " << this->width << endl;
}