//
// this source file will contain everything which i will need to draw snake in the console
//

#ifndef SNAKEGAME_VIEWBUILDER_H
#define SNAKEGAME_VIEWBUILDER_H

using namespace std;

#include "model/field.h"
#include <iostream>
#include <string>

const char rightBottomCorner  = 188;
const char rightTopCorner  = 187;
const char leftBottomCorner  = 200;
const char leftTopCorner  = 201;
const char border = 186;
const char rotatedBorder  = 205;

void clearScreen();
void drawField(Field field);


void drawField(Field field){

    clearScreen();

    const int lengthCoordinate = field.getLength()-1;
    const int widthCoordinate = field.getWidth()-1;

    for (int i = 0; i < field.getWidth(); ++i) {
        for (int j = 0; j < field.getLength(); ++j) {

            //I had a problem with switch who can't use expressions in case
            //that's why option here.  It's just not to make switch evaluate this
            int option =  i;
            if(i == widthCoordinate){
                option = -1;
            }
            if ((j == 0 || j == lengthCoordinate) && i != 0 && i != widthCoordinate) {
                option = -2;
            }

            switch(option){
                case 0:
                    if(j==0){
                        cout << leftTopCorner;
                    }else if(j == lengthCoordinate){
                        cout << rightTopCorner;
                    }else{
                        cout << rotatedBorder;
                    }
                    break;
                case -1:
                    if(j == 0){
                        cout << leftBottomCorner;
                    }else if(j == lengthCoordinate){
                        cout << rightBottomCorner;
                    }else{
                        cout << rotatedBorder;
                    }
                    break;
                case -2:
                    cout << border;
                    break;
                default:
                    cout << " ";
            }

        }

        cout<<endl;
    }
}

void clearScreen() {
    cout << string( 100, '\n' );
}


#endif //SNAKEGAME_VIEWBUILDER_H