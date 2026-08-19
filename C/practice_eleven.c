#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite 2 numeros: ");
    scanf("%i %i", &n1, &n2);

    if (n1 > n2) {
        printf("El numero mayor es %i", n1);
    } else if (n2 > n1){
        printf("El numero mayor es %i", n2);
    } else {
        puts("Los numeros tienen el mismo valor");
    }

    return 0;
}