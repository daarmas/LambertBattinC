//
// Created by daarmas on 15/03/2023.
//

#include <iostream>
#include <cmath>
#include "vector.h"
#include "seebatt.h"
#include "seebattk.h"
#include "LambertBattin.h"

using namespace std;

//En este programa se desarrollaran los test unitarios de C++
int main() {
    double v[] = {1, 1, 1};
    double v2[] = { 1, 2, 3};
    double v3[] = { 1, 2, 3};

    double u[] = {1.0, -2.0, 1.0};

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

    if((fabs(seebatt(3.76982021737918) - 8.03007718341174)) < pow(10,-12)){
        cout<< "Test seebatt pasado" << endl;
    } else{
        cout<< "Test seebatt no pasado" << endl;
    }

    if((fabs(seebattk(0.395327782016551) - 0.314891082486492)) < pow(10,-12)){
        cout<< "Test seebattk pasado" << endl;
    } else{
        cout<< "Test seebattk no pasado" << endl;
    }

    if(iguales(v2, v3, 3)){
        cout<< "Test iguales pasado" << endl;
    } else{
        cout<< "Test iguales no pasado" << endl;
    }


    double crs[3];
    cross(v, v2, crs);

    if(iguales(crs, u, 3)){
        cout << "Cross Correcto" << endl;
    }else{
        cout << "Cross Incorrecto" << endl;
    }


    double lb1[] = {4144.30717367665, -1571.15318557575, 0};
    double lb2[] = {3223.39508300486, 4103.76281774997, 0};

    double r1[] = {20.0e6, 20.0e6, 0};
    double r2[] = {-20.0e6, 10.0e6, 0};
    double tof = 1.0 * 86400;
    double vo[3];
    double vv[3];
    char a[]= "retro";
    LambertBattin(r1, r2, a, tof, vo, vv);
    if(iguales(vo,lb1,3) && iguales(vv,lb2,3)){
        cout << "LambertBattin Correcto" << endl;
    }else{
        cout << "LambertBattin Inorrecto" << endl;
    }

//    for(int i=0; i<3; i++){
//        cout<< vo[i] <<endl;
//    }
//    cout << endl;
//    for(int i=0; i<3; i++){
//        cout<< vv[i] <<endl;
//    }

    return 0;
}