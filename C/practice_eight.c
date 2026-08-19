#include <stdio.h>

int main()
{
    int horas;
    float sph, salario = 0;

    printf("Digite las horas trabajadas de la persona: ");
    scanf("%f", &horas);
    
    printf("Digite la ganancia por hora: ");
    scanf("%f", &sph);

    salario = horas * sph;
    printf("El sueldo del trabajador es de $%2.f", salario);
    return 0;
}