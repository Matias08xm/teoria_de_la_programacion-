#include <stdio.h>
#include <math.h>

void main (){  
    float kg = 0.0;
    float gramos = 0.0;
    float calculo_log = 0.0;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &kg);
    gramos = kg * 1000;

    if(gramos >= 0){
        calculo_log = log10(gramos);
        printf("Cantidad de kg: %.2f kg\n", kg);
        printf("Cantidad de gramos: %.2f g\n", gramos);
        printf("El logaritmo de base 10 del resultado obtenido es de: %.2f\n", calculo_log);
        printf("%.2f kg equivalen a %.2f g\n", kg, gramos);
    }else {
        printf("Ingrese un valor mayor a 0\n");
    }
}