#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c = 0;
    printf("Ingresa los catetos de tu triangulo:\n");
    scanf("%f %f", &a, &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("Triangulo valido");
    } else {
        printf("Triangulo invalido");
    }


    return 0;
}