#include <stdio.h>
#include <math.h>

void main (){
    int z = 0;
    int s = 0;
    int val1 = 0;
    float promedio = 0.0;
    float prom_cubo = 0.0;

    printf ("Ingrese s:\n");
    scanf ("%d", &s);

    printf ("Ingrese z:\n");
    scanf ("%d", &z);

    printf ("Ingrese val1:\n");
    scanf ("%d", &val1);

    promedio = ((z + s + val1)/3.0);

    if (promedio > 0){
    prom_cubo = pow(promedio,3.0);
    printf ("El promedio es: %.2f\n", promedio);
    printf ("El promedio al cubo es: %.2f\n", prom_cubo);

    } else {
    printf ("El promedio es negativo, ingrese valores mayores a 0\n");
    }
}