#include <stdio.h>
#include <math.h>

void main(){
    
    float capital = 0.0;
    float tasa = 0.0;
    int tiempo = 0;
    float interes_generado = 0.0;
    float monto_total = 0.0;

    printf("Ingrese el capital:\n");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interes anual:\n");
    scanf("%f", &tasa);

    printf("Ingrese el tiempo en años:\n");
    scanf("%d", &tiempo);

    if(capital > 0 && tasa > 0 && tiempo > 0){

        interes_generado = round((capital * tasa * tiempo / 100) * 100) / 100;
        monto_total = round((capital + interes_generado) * 100) / 100;

        printf("Capital: %.2f\n", capital);
        printf("Tasa de interes anual: %.2f\n", tasa);
        printf("Tiempo en años: %d\n", tiempo);
        printf("Interes generado: %.2f\n", interes_generado);
        printf("Monto total: %.2f\n", monto_total);
    }else {
        printf("Por favor ingrese datos positivos.\n");
    }
}