#include <stdio.h>

int main()
{
    char x[50];
    printf("Digite su nombre: ");
    fgets(x, sizeof(x), stdin);

    printf("Bienvenido %s", x);
    return 0;
}