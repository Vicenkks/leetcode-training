#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, n3;
    printf("Ingresa el primer numero ");
    scanf("%f", &n1);
    printf("Ingresa el segundo numero ");
    scanf("%f", &n2);
    printf("Ingresa el tercer numero ");
    scanf("%f", &n3);

    printf("La media geometrica de los numeros ingresados es de %f", cbrt((n1 * n2 * n3)));
    return 0;
}