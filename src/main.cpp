#include <iostream>
#include "Model/field.h"

using namespace std;
//main game loop

int main() {

    Field field(10);
    Field field2(10,12);
    Field field3;

    field.print();
    field2.print();
    field3.print();

}