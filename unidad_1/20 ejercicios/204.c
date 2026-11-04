#include <stdio.h>
#include <math.h>

void main (){

int   FACTOR = 360;
float PI = 3.14159;
float radio = 0.0;
float angulo = 0.0;
float area_sector = 0.0;
float area_cuadrado = 0.0;

printf ("Ingrese el radio:\n");
scanf ("%f", &radio);

printf ("Ingrese el angulo:\n");
scanf ("%f", &angulo);

if(radio > 0 && angulo > 0){
    
area_sector = (PI * radio * radio * angulo) / FACTOR;
area_cuadrado = pow(area_sector,2);
printf("El radio es: %.2f \n", radio);
printf("El angulo es: %.2f grados\n", angulo);
printf ("El area del sector es: %.2f \n", area_sector);
printf ("El cuadrado del area del sector es: %.2f \n", area_cuadrado);
} else {
    printf("Ingrese valores mayores a 0.\n");
}
}