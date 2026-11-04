#include <stdio.h>

void main() {  

    const float TIEMPO_CARNE = 0.5;
    const float TIEMPO_PESCADO = 0.3;
    const float TIEMPO_VERDURA = 0.2;
    const float TIEMPO_ARROZ = 0.15;
    const float TIEMPO_HORNO = 1.4;
    const float TIEMPO_FREIR = 0.6;
    const float TIEMPO_VAPOR = 1.0;

    float peso= 0.0, factor_alimento = 0.0, factor_metodo = 0.0, tiempo = 0.0, factor = 0.0, descuento = 0.0;
    char carne = 'C', pescado = 'P', verdura = 'V', arroz = 'A';  
    char horno = 'H', freir = 'F', vapor = 'V';
    char alimento = carne || pescado || verdura || arroz;
    char metodo = horno || freir || vapor;

    printf("\nBienvenido a nuestro hotel, por favor ingrese el tipo de alimento y su metodo, para calcular su tiempo de coccion.\n");
    printf("Ingrese el peso del alimento (g): ");
    scanf("%f", &peso);
    printf("Ingrese el tipo de alimento (C para Carne, P para Pescado, V para Verdura, A para Arroz): ");
    scanf(" %c", &alimento);
    printf("Ingrese el metodo de coccion (H para Horno, F para Freir, V para Vapor): ");
    scanf(" %c", &metodo);

    if (alimento == carne) {
        factor_alimento = TIEMPO_CARNE;
    } else if (alimento == pescado) {
        factor_alimento = TIEMPO_PESCADO;
    } else if (alimento == verdura) {
        factor_alimento = TIEMPO_VERDURA;
    } else if (alimento == arroz) {
        factor_alimento = TIEMPO_ARROZ;
    } 
    if (metodo == horno) {
        factor_metodo = TIEMPO_HORNO;
    } else if (metodo == freir) {
        factor_metodo = TIEMPO_FREIR;
    } else if (metodo == vapor) {
        factor_metodo = TIEMPO_VAPOR;
    }
    factor = factor_alimento * factor_metodo;
    tiempo = peso * factor;
    descuento = tiempo - (tiempo * 0.05); // Aplicar descuento del 5%

    printf("El tiempo recomendado de coccion del alimento es: %.2f minutos\n", tiempo);
    printf("El descuento del 5%% del tiempo es: %.2f minutos\n", descuento);
    } 