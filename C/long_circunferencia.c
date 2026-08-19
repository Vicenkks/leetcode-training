#include <stdio.h>
#define PI 3.1416

int main()
{
    float longitud = 0, radio = 0;

    printf("\nDigita tu radio en cm: ");
    scanf("%f", &radio);

    longitud = 2 * PI * radio;

    printf("La longitud de la circunferencia es: %.2f cm\n", longitud);

    return 0;
}