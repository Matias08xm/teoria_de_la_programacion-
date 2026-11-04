#include <stdio.h>
#include <math.h>

void main() {
    // Declaracion de constantes simbólicas
    const float PERDIDA_SEMANAL_IDEAL = 0.5;
    const float GANANCIA_SEMANAL_IDEAL = 0.25;
    const float CALORIAS_POR_KG = 7700;
    // Declaración de variables
    float peso_actual = 0.0, peso_obj = 0.0, alt = 0.0, dif_peso = 0.0, cal_totales = 0.0, ritmo_recom = 0.0, descuento = 0.0;
    float calorias_semanales = 0.0, resultado_final = 0.0, IMC = 0.0, TMB = 0.0;
    int edad = 0, semana = 0;
    // Entrada de datos
    printf("Ingrese su peso actual (kg): ");
    scanf("%f", &peso_actual);

    printf("Ingrese su peso objetivo (kg): ");
    scanf("%f", &peso_obj);

    printf("Ingrese su altura (m): ");
    scanf("%f", &alt);

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese la cantidad de semanas para alcanzar su objetivo: ");
    scanf("%d", &semana);
    // Cálculos
    IMC = peso_actual / (alt * alt); // Cálculo del Índice de Masa Corporal (IMC)
    dif_peso = peso_actual - peso_obj; // Cálculo de la diferencia de peso

    if (dif_peso > 0){ // Si el peso actual es mayor que el peso objetivo, se recomienda perder peso                                   
        ritmo_recom = PERDIDA_SEMANAL_IDEAL;
        printf("\nSe recomienda perder %.2f kg por semana.\n", ritmo_recom);
    } else if (dif_peso < 0){ // Si el peso actual es menor que el peso objetivo, se recomienda ganar peso
        ritmo_recom = GANANCIA_SEMANAL_IDEAL;
        printf("\nSe recomienda ganar %.2f kg por semana.\n", ritmo_recom);
    } else {
        ritmo_recom = 0.0; // Si el peso actual es igual al peso objetivo, no se recomienda ningún cambio de peso
        printf("\nNo hay diferencia de peso. Mantener el peso actual.\n");
    }

    TMB = (10 * peso_actual) + 6.25 * (alt * 100) - (5 * edad) + 5; // Cálculo de la Tasa Metabólica Basal (TMB)
    cal_totales = fabs(dif_peso) * CALORIAS_POR_KG; // Cálculo de las calorías totales a perder/ganar
    calorias_semanales = cal_totales / semana; // Cálculo de las calorías semanales necesarias para alcanzar el objetivo
    descuento = calorias_semanales * 0.05; // Aplicar un 5% de descuento
    resultado_final = calorias_semanales - descuento; // Cálculo de las calorías finales necesarias
    // Salida de resultados
    printf("\nResultados:\n");
    printf("IMC: %.2f\n", IMC);
    printf("Tasa Metabolica Basal (TMB): %.2f kcal/dia\n", TMB);
    printf("Diferencia de peso: %.2f kg\n", dif_peso);
    printf("Ritmo recomendado: %.2f kg/semana\n", ritmo_recom);
    printf("Calorias totales a perder/ganar: %.2f kcal\n", cal_totales);
    printf("Calorias semanales necesarias para alcanzar el objetivo: %.2f kcal/semana\n", calorias_semanales);
    printf("Descuento aplicado (5%%): %.2f kcal/semana\n", descuento);
    printf("Calorias finales necesarias: %.2f kcal/semana\n", resultado_final);
} 