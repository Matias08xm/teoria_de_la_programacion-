#include <stdio.h>
#include <math.h>

int main() {
     
    float num1 = 0.0;       //Real
    float num2 = 0.0;       //Real
    float promedio = 0.0;   //Real
    float resultado = 0.0;  //Real

    printf("Este algoritmo sirve para calcular el promedio de dos numeros reales\n");
    printf("mostrrando dicho promedio elevado a la 4ta potencia\n");

    printf("Ingrese un numero real:\n");
    scanf("%f", &num1);
    printf("Ingrese otro numero real:\n");
    scanf("%f", &num2);

    promedio = ((num1 + num2) / 2);
    resultado = pow(promedio, 4);

if (promedio > 0){
    printf("El promedio entre los numeros es:%.2f\n", promedio);
    printf("El promedio elevado a la 4ta potencia es:%.2f\n", resultado);

} else {
        printf("El promedio es menor a 0, ingrese datos positivos\n");
    }
}
