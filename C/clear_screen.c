#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tecla;
    printf("!PROGRAMA PARA LIMPIAR LA TERMINAL");
    printf("\n----------------------------------");
    printf("\n----------------------------------");
    printf("\nPresione 1");
    scanf("%c", &tecla);

    if (tecla == '1'){
        system("clear");
        printf("La terminal ha sido limpiada");
    } 
    else {
        printf("!!ERROR");
    }

    return 0;
}