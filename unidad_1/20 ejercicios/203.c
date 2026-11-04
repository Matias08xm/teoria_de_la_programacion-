#include <stdio.h>

void main(){

float TASA_CAMBIO = 0.27;
float PI = 3.1416;
float soles= 0.0;
float dolares= 0.0;
float dolares_prod= 0.0;

printf ("Ingrese los soles:\n");
scanf ("%f", &soles);

if (soles > 0){

    dolares = soles * TASA_CAMBIO;
    dolares_prod = (dolares * PI);

    printf ("%.2f soles equivalen a %.2f dolares\n", soles, dolares);
    printf ("El producto del resultado por PI es: %.2f\n", dolares_prod);

} else {
    printf ("Ingrese un valor mayor a 0\n");
}
   
}