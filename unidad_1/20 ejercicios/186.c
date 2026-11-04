#include <stdio.h>

void main() {
    //Constantes simbólicas
    const float CERT_B = 50.0;
    const float CERT_P = 150.0;
    const float FACTOR_INDIVIDUAL = 2.0;
    const float DESC_GRUPO_GRANDE = 0.10;
    const float MIN_GRUPO = 10;
    //Variables
    float costo_base = 0.0, costo_tiempo = 0.0, costo_certificado = 0.0, costo_total = 0.0, costo_total_descuento = 0.0;
    int numero_grupo = 0, semanas = 0;
    //Variables de tipo char
    char ninguna = 'N', basica = 'B', profesional = 'P';
    char grupo = 'G', individual = 'I';
    //Variables de tipo char para almacenar la entrada del usuario
    char tipo_certificado = ninguna || basica || profesional;
    char modalidad = grupo || individual;

    //Paso 1: Solicitar al usuario el costo base del curso, cantidad de semanas, tipo de certificado y modalidad.

    printf("Ingrese el costo base del curso: ");
    scanf("%f", &costo_base);

    printf("Ingrese la cantidad de semanas del curso: ");
    scanf("%d", &semanas);

    printf("Ingrese el tipo de certificado (N para Ninguna, B para Basica, P para Profesional): ");
    scanf(" %c", &tipo_certificado);

    printf("Ingrese la modalidad del curso (G para Grupo, I para Individual): ");
    scanf(" %c", &modalidad);

    if (modalidad == grupo) {
        printf("Ingrese el número de personas en el grupo: ");
        scanf("%d", &numero_grupo);
    }
    //Paso 2: Calcular el costo total del curso según la modalidad y el tipo de certificado.
    costo_tiempo = costo_base * semanas;
    costo_certificado = (tipo_certificado == basica) ? CERT_B : (tipo_certificado == profesional) ? CERT_P : 0;
    costo_certificado = costo_tiempo + costo_certificado;
    
    if (modalidad == individual) {
        costo_total = costo_certificado * FACTOR_INDIVIDUAL;
    } else { 
        if (numero_grupo >= MIN_GRUPO) {
            costo_total = costo_certificado * (1 - DESC_GRUPO_GRANDE);
        } else {
            costo_total = costo_certificado;}
        }
    costo_total_descuento = costo_total * (1 - 0.05); // Aplicar descuento del 5%
    //Mostrar el detalle del algoritmo
    printf("\nDetalle del costo del curso:\n");
    printf("Costo base: %.2f\n", costo_base);
    printf("Costo por tiempo (semanas): %.2f\n", costo_tiempo);
    printf("Costo por certificado: %.2f\n", costo_certificado);
    printf("Costo total: %.2f\n", costo_total);
    printf("Costo total con descuento: %.2f\n", costo_total_descuento);
} 