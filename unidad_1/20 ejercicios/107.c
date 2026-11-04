#include <stdio.h>

void main (){

    float DESCUENTO = 0.05;
    float diagonal_mayor = 0.0;
    float diagonal_menor =0.0;
    float area = 0.0;
    float area_desc = 0.0;

    printf("Ingrese la diagonal mayor en metros:\n");
    scanf("%f", &diagonal_mayor);

    printf("Ingrese la diagonal menor en metros:\n");
    scanf("%f", &diagonal_menor);

    if(diagonal_mayor > 0 && diagonal_menor > 0){

        area = ((diagonal_mayor * diagonal_menor) / 2);
        area_desc = (area - (area * DESCUENTO));

        printf("El area del rombo es: %.2f m^2\n", area);
        printf("El area con descuento es: %.2f m^2\n", area_desc);   

    }else {

        printf("Ingrese datos mayores a 0");
    }
}