#include <stdio.h>
#include <math.h>

int main()
{
    float hip = 0, cat_op, cat_ad;

    printf("Digite el valor de ambos catetos: ");
    scanf("%f %f", &cat_op, &cat_ad);

    hip = sqrt(pow(cat_ad, 2)+pow(cat_op, 2));
    
    printf("La hipotenusa de tu triangulo rectangulo tiene el valor: %.2fcm", hip);

    return 0;
}