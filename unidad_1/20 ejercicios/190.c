#include <stdio.h>

void main() {

    const float PROMEDIO_NACIONAL = 2500;
    const float FACTOR_DOMESTICO = 1.0;
    const float FACTOR_AGRICOLA = 1.5;
    const float FACTOR_INDUSTRIAL = 2.0;
    float domestico = 0.0, agricola = 0.0, industrial = 0.0, huella = 0.0, descuento = 0.0;
    int personas = 0;

    printf("Ingrese el consumo domestico ( litros/dia): ");
    scanf("%f", &domestico);
    printf("Ingrese el consumo agricola ( litros/dia): ");
    scanf("%f", &agricola);
    printf("Ingrese el consumo inddustrial ( litros/dia): ");
    scanf("%f", &industrial);
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &personas);

    huella = ((domestico * FACTOR_DOMESTICO + agricola * FACTOR_AGRICOLA + industrial * FACTOR_INDUSTRIAL) * personas * 365); 
    descuento = huella - (huella * 0.05);

    if (huella > PROMEDIO_NACIONAL * personas * 365){
        printf("\nLa huella hidrica es mayor que el promedio nacional\n");
    } else {
        printf("\nLa huella hidrica es menor que el promedio nacional\n");
    }
    printf("La huella hidrica es: %.2f litros/anio\n", huella);
    printf("El descueto aplicado a la huella hidrica es: %.2f litros/anio\n", descuento);
}