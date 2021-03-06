//This source file handles all input made by the user in different situations

#ifndef SNAKEGAME_INPUTHANDLER_H
#define SNAKEGAME_INPUTHANDLER_H

#include <iostream>
using namespace std;

/*
 * argument:
 * optionNumber:
 * 1 - length
 * 2 - width
 * 3 - dimension for the square field
 * 4 - field type
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

        case 3:
            cout << "Enter the dimension of the square field" << endl;
            cin >> userInput;

            while(userInput <= 0 || userInput > 100){
                cout << "The dimension should be in range: [1;100]" << endl;
                cout << "Please enter the dimension of the field once again" << endl;
                cin >> userInput;
            }

            return userInput;

        case 4:
            cout << "Let's choose the type of field you want to play in!" << endl;
            cout << "Please type 0 for square field and type 1 for rectangle" << endl;
            cin >> userInput;

            while(userInput < 0 || userInput > 1){
                cout << "There's no such type of field ((" << endl;
                cout << "Please type '0' for square field and type '1' for rectangle" << endl;
                cin >> userInput;
            }

            return userInput;

        default:
            cout << "Invalid argument" << endl;
            return -1;
    }
}


int inputArray(){

    return 0;
}

#endif //SNAKEGAME_INPUTHANDLER_H
