#include <stdio.h>
#include <math.h>

void main(){

    float y = 0.0;
    float cuadrado = 0.0;
    float promedio = 0.0;
    float diferencia = 0.0;
    
    printf ("Ingrese un numero real:\n ");
    scanf ("%f", &y);

    cuadrado = pow (y, 2);
    
    if (cuadrado >= 0) {
    promedio = (y + cuadrado) / 2.0;
    diferencia = (cuadrado - promedio);
    
    printf ("El cuadrado de %.2f es: %.2f\n ", y, cuadrado);
    printf ("El promedio es de: %.2f\n ", promedio);
    printf ("La diferencia entre el cuadrado y el promedio es: %.2f\n ", diferencia);

} else {
    printf ("El valor ingresado es incorrecto");
}
}