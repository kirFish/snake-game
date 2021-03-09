#include <iostream>
#include "Model/field.h"
#include "inputHandler.h"

using namespace std;

//main game loop
int main() {

    cout << "Welcome to the snake game!" << endl;
    int fieldType = inputNumber(4);
    Field field{};

    switch(fieldType){

        case 0:
            field.length = inputNumber(3);
            field.width = field.length;
            field.size = field.length*field.length;
            break;

        case 1:
            field.length = inputNumber(1);
            field.width = inputNumber(2);
            field.size = field.length*field.width;
            break;
    }
}
