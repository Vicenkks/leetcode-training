#include <stdio.h>
#include <string.h> 

int main()
{
    char nombre[30], signo[20];
    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Ingresa tu signo: ");
    fgets(signo, sizeof(signo), stdin);

    signo[strcspn(signo, "\n")] = '\0';

    if (strcmp(signo, "aries") == 0)
    {
        printf("Su nombre es: %s", nombre);
    } else {
        puts("No es signo aries");
    }

    return 0;
}