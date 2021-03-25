#include <iostream>
#include "model/field.h"
#include "controller/input.h"

using namespace std;

//main game loop
int main() {

    cout << "Welcome to the snake game!" << endl;
    Field field{inputNumber(1), inputNumber(2)};

    field.cleanUp();

    return 0;
}