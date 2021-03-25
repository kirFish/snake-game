//
// Created by Kirill Fishchuk on 02.03.2021.
//

#include <iostream>
#include "field.h"
#include "coordinate.h"

using namespace std;

void Field::print() {

    cout << endl;
    cout << "The size of the field is: " << this->size << endl;
    cout << "The length of the field is: " << this->length << endl;
    cout << "The width of the field is: " << this->width << endl;
}


//method which cleans up allocated memory after the work
void Field::cleanUp(){

    for (int i = 0; i < this->length; ++i) {
        delete[] this->coordinates[i];
    }
    delete this->coordinates;
}


Field::Field(int length, int width) : length(length), width(width) {

    this->size =  length*width;
    this->coordinates = new Coordinate*[length];

    for (int i = 0; i < length; ++i) {
        this->coordinates[i] = new Coordinate[width];
    }

    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++)
            this->coordinates[i][j] = Coordinate(true);

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
//            printf(this->coordinates[i][j].isBusy ? " true " : " false ");
            cout << "( " << i << ", " << j << " )";
        }

        cout<<endl;
    }


}