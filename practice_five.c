#include <stdio.h>

int main()
{
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
    printf("Digita 2 numeros para operar: ");
    scanf("%i %i", &n1, &n2);
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    printf("\nLa suma es: %i", suma);
    printf("\nLa resta es: %i", resta);
    printf("\nLa multiplicacion es: %i", multiplicacion);
    printf("\nLa division es: %i", division);
    return 0;
}