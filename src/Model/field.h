//
// Created by Kirill Fishchuk on 02.03.2021.
//

#ifndef SNAKEGAME_FIELD_H
#define SNAKEGAME_FIELD_H


class Field {

    private:
        //size
        int size = 0;
        int length;
        int width;

    public:

        Field()= default;


        //Creates a square field
        Field(int dimension){
            this->size = dimension * dimension;
            this->width = dimension;
            this->length = dimension;
        }


        Field(int length, int width){
            this->length = length;
            this->width = width;
            this->size = length * width;
        }


        void print();


        void setLength(int inputLength) {
            Field::length = inputLength;

            if(this->size == 0 && this->width != 0){
                this->size = inputLength * this->width;
            }
        }


        void setWidth(int inputWidth) {
            Field::width = inputWidth;

            if(this->size == 0 && this->length != 0){
                this->size = inputWidth * this->length;
            }
        }


        int getSize() const {
            return size;
        }


        int getLength() const {
            return length;
        }


        int getWidth() const {
            return width;
        }
};

#endif //SNAKEGAME_FIELD_H