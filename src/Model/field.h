//
// Created by Kirill Fishchuk on 02.03.2021.
//

#ifndef SNAKEGAME_FIELD_H
#define SNAKEGAME_FIELD_H


class Field {

    public:
        //size
        int size;
        int length;
        int width;

    public:

        Field(){

        }

        //Creates a square field
        Field(int dimension){
            this->size = dimension * dimension;
            this->width = dimension;
            this->length = dimension;
        }

        /*//Creates a square field
        Field(double area){

            double dimension = sqrt(area);

            dimension

        }*/

        Field(int length, int width){
            this->length = length;
            this->width = width;
            this->size = length * width;
        }

        void print();

};

#endif //SNAKEGAME_FIELD_H