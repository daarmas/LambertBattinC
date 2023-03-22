//
// Created by daarmas on 15/03/2023.
//

#include "vector.h"

//PRE: n es el tamaño del vector v
//POS: devuelve la norma del vector v
double norm(double v[], int n) {
    double suma=0;
    if(n<=0){
        throw "Tamaño no valido";
    }
    for (int i=0; i< n; i++) {
        suma+= v[i]*v[i];
    }
    return sqrt(suma);
}

//PRE: n es el tamaño de ambos vectores, ambos tamaños deben ser iguales.
//POS: devuelve el producto escalar de v1 y v2
double dot(double v1[], double v2[], int n){
    double suma=0;
    if(n<=0){
        throw "Tamaño no valido";
    }
    for(int i=0; i<n; i++){
        suma+=v1[i]*v2[i];
    }
    return suma;
}

//double* cross(double *v1, double *v2, int n){
//    double v[] = {};
//}


