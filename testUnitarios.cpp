//
// Created by daarmas on 15/03/2023.
//

#include <iostream>
#include <cmath>
#include "vector.h"

using namespace std;

//En este programa se desarrollaran los test unitarios de C++
int main() {
    double v[] = {1, 1, 1};
    double v2[] = { 1, 2, 3};

    if(fabs(norm(v, 3)-sqrt(3.0))<pow(10,-12)){
        cout << "Norm Correcto" << endl;
    }else{
        cout << "Norm Incorrecto" << endl;
    }

    if(fabs(dot(v2, v2, 3)-14.0)<pow(10,-12)){
        cout << "Dot Correcto" << endl;
    }else{
        cout << "Dot Incorrecto" << endl;
    }

    return 0;
}