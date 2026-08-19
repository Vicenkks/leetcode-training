#include <stdio.h> 

#define PI 3.14

int y = 2; //variable global

int main( ){ 
/*
    int x = 10;

    float suma = 0;
    suma = x + PI;

    printf("La suma de la variable X + Pi es: %.3f",suma);
*/
// Tipos de datos
    char a = 'e'; // Tamaño de 1 Byte Rango: 0.. 255
    short b = -15; // Tamaño de 2 Bytes, Rango: -128.. 127 
    int c = 1024; // Tamaño de 2 Bytes, Rango: -32768.. 31767
    unsigned int d = 128; // Tamaño de 2 Bytes, rango de 0.. 65535
    long e = 123456; // Tamaño 4 Bytes
    float f = 15.678; // Tamaño 4 Bytes
    double m = 123141313123.1231313131; // Tamaño 8 Bytes

    printf("El elemento de m es : %lf", m);
    return 0;
}

