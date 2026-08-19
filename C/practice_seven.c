#include <stdio.h>

int main()
{
    float compra, descuento = 0.15, valor_total = 0;
    printf("Ingrese el valor de la compra:\n");
    scanf("%f", &compra);

    valor_total = compra - (compra * descuento);

    printf("Precio final: $%2.f", valor_total);
    
    return 0;
}