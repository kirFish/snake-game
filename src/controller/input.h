//This source file handles all input made by the user in different situations

#ifndef SNAKEGAME_INPUT_H
#define SNAKEGAME_INPUT_H

#include <iostream>
using namespace std;

/*
 * argument:
 * optionNumber:
 * 1 - length
 * 2 - width
 * return:
 * single number of wanted input or -1 in case of illegal argument
 * */
int inputNumber(int optionNumber){

    int userInput  = 0;

    switch (optionNumber) {

        case 1:
            cout << "Enter the length of the field" << endl;
            cin >> userInput;

            while(userInput <= 0 || userInput > 100){
                cout << "The length should be in range: [1;100]" << endl;
                cout << "Please enter the length of the field once again" << endl;
                cin >> userInput;
            }

            return userInput;

        case 2:
            cout << "Enter the width of the field" << endl;
            cin >> userInput;

            while(userInput <= 0 || userInput > 100){
                cout << "The width should be in range: [1;100]" << endl;
                cout << "Please enter the width of the field once again" << endl;
                cin >> userInput;
            }

            return userInput;


        default:
            cout << "Invalid argument" << endl;
            return -1;
    }
}


#endif //SNAKEGAME_INPUT_H
