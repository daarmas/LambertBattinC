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

//PRE: v1 y v2 son vectores de tamaño 3.
//POS: devuelve el producto vectorial.
void cross(double *v1, double *v2, double *salida){
    salida[0] = v1[1]*v2[2]-v1[2]*v2[1];
    salida[1] = v1[2]*v2[0]-v1[0]*v2[2];
    salida[2] = v1[0]*v2[1]-v1[1]*v2[0];
}

//PRE: v y u son vectores de tamaño n
//POS: devuelve verdadero si v y u son equivalentes, falso en caso contrario.
bool iguales(double *v, double *u, int n){
    for(int i=0;i<n;i++){
        if(v[i]!=u[i]){
            return false;
        }
    }
    return true;
}


