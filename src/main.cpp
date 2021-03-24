#include <iostream>
#include "Model/field.h"
#include "inputHandler.h"

using namespace std;

//main game loop
int main() {

    cout << "Welcome to the snake game!" << endl;

    int length = inputNumber(1);
    int width = inputNumber(2);

    Field field{length, width};
}
