#include <iostream>
#include "model/field.h"
#include "view/console/viewBuilder.h"
#include "controller/input.h"

using namespace std;

//main game loop
int main() {

    cout << "\n" << "Welcome to the snake game!"<< "\n" << endl;

    Field field{inputNumber(1), inputNumber(2)};
//    Field field{100,15};

    drawField(field);
/*
    field.setLength(10);
    field.setWidth(5);

    drawField(field);*/

    field.cleanUp();
    return 0;
}