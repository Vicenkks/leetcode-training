#include <stdio.h>

int main()
{
    float B, b, h, area = 0;
    printf("Ingresa la base mayor, la base menor, y la altura de tu trapecio en centimetros\n");
    scanf("%f %f %f", &B, &b, &h);

    area = ((B + b) * h)/2;

    printf("El area de tu trapecio es de %2.f centimetros cuadrados", area);
    return 0;
}