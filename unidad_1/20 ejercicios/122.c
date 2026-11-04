#include <stdio.h>
#include <math.h>

int main() {
  
    float num1 = 0.0;
    float num2 = 0.0;
    float media_geometrica = 0.0;
    float descuento = 0.0;
    
    printf("Ingrese un numero positivo: \n");
    scanf("%f", &num1);
    printf("Ingrese otro numero positivo: \n");
    scanf("%f", &num2);

    if ((num1 > 0) && (num2 > 0)) {

    media_geometrica = sqrt(num1 * num2);
    descuento = media_geometrica - (media_geometrica * 0.05);  
    printf("La media geometrica es: %.2f \n", media_geometrica);
    printf("La media geometrica con 5%% de descuento es: %.2f \n", descuento);

    } else {
    printf("Ingrese valores mayores a 0 \n");
    }
}