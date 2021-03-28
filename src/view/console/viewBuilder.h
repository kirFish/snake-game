//
// this source file will contain everything which i will need to draw snake in the console
//

#ifndef SNAKEGAME_VIEWBUILDER_H
#define SNAKEGAME_VIEWBUILDER_H

using namespace std;

#include "model/field.h"

const char rightBottomCorner  = 188;
const char rightTopCorner  = 187;
const char leftBottomCorner  = 200;
const char leftTopCorner  = 201;
const char border = 186;
const char rotatedBorder  = 205;


void drawField(Field field){

    const int lengthCoordinate = field.getLength()-1;
    const int widthCoordinate = field.getWidth()-1;

    for (int i = 0; i < field.getWidth(); ++i) {
        for (int j = 0; j < field.getLength(); ++j) {

            if(i == 0 ){
                if(j==0){
                    cout << leftTopCorner;
                }else if(j == lengthCoordinate){
                    cout << rightTopCorner;
                }else{
                    cout << rotatedBorder;
                }
            }

            if(i == widthCoordinate){

                if(j == 0){
                    cout << leftBottomCorner;
                }else if(j == lengthCoordinate){
                    cout << rightBottomCorner;
                }else{
                    cout << rotatedBorder;
                }
            }

            if(i > 0 && i < widthCoordinate) {
                if (j == 0 || j == lengthCoordinate) {
                    cout << border;
                }
            }

            if(i == 0 || i == widthCoordinate || (i < widthCoordinate && i > 0 && j == lengthCoordinate)){
                cout << "";
            }else{
                cout << " ";
            }
        }

        cout<<endl;
    }
}

#endif //SNAKEGAME_VIEWBUILDER_H