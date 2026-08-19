#include <stdio.h>

int main()
{
    float aumento = 1.25, salario, salario_f = 0;

    printf("Ingrese el salario del trabajador: ");
    scanf("%f", &salario);
    
    salario_f = aumento * salario;
    printf("El nuevo sueldo del trabajador de $%2.f", salario_f);
    return 0;
}