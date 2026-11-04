#include <stdio.h>

void main (){

    int contador = 0;
    float BONO = 1.5;
    float largo = 0.0;
    float ancho = 0.0;
    float alto = 0.0;
    float volumen = 0.0;
    float volumen_BONO = 0.0;
    
    printf("Ingrese el largo:\n");
    scanf ("%f", &largo);

    printf ("Ingrese el ancho:\n");
    scanf ("%f", &ancho);

    printf ("Ingrese el alto:\n");
    scanf ("%f", &alto);

    if(largo > 0 && ancho > 0 && alto > 0){
    
    volumen = (largo * ancho * alto);
    contador = contador + 1;
    volumen_BONO = volumen * BONO;
    contador = contador + 1;
    printf ("El volumen del prisma es: %.2f\n", volumen );
    printf ("Y el volumen del prisma multiplicado por el bono es: %.2f\n", volumen_BONO);
    printf ("El total de operaciones matematicas realizadas es: %d\n", contador);

    } else {
    printf ("Ingrese valores mayores a 0\n");   
    }
}