#include <stdio.h>

void main(){

    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, nota5 = 0.0;
    float porcentaje = 0.0, promedio = 0.0, suma = 0.0, mayor = 0.0, menor = 0.0;
    int valor_ref = 0;

printf ("Ingrese la nota 1:\n ");
scanf ("%f", &nota1);
printf ("Ingrese la nota 2:\n ");
scanf ("%f", &nota2);
printf ("Ingrese la nota 3:\n ");
scanf ("%f", &nota3);
printf ("Ingrese la nota 4:\n ");
scanf ("%f", &nota4);
printf ("Ingrese la nota 5:\n ");
scanf ("%f", &nota5);

printf ("Ingrese la referencia de calificacion:\n ");
scanf ("%d", &valor_ref);

mayor = nota1;
menor = nota1;

if (nota2 > mayor) {
    mayor = nota2;
} else if (nota2 < menor) {
    menor = nota2;}

if (nota3 > mayor) {
    mayor = nota3;
} else if (nota3 < menor) {
    menor = nota3;}

if (nota4 > mayor) {
    mayor = nota4;
} else if (nota4 < menor) {
    menor = nota4;}

if (nota5 > mayor) {
    mayor = nota5;
} else if (nota5 < menor) {
    menor = nota5;}

suma = (nota1 + nota2 + nota3 + nota4 + nota5);
promedio = ((suma - mayor - menor) / 3);
porcentaje = ((promedio/valor_ref) * 100);

printf ("El promedio des de: %.2f\n ", promedio);
printf ("El porcentaje es: %.2f%%\n ", porcentaje);
}