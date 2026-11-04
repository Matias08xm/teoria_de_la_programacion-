#include <stdio.h>

void main() {  

    const float UMBRAL_RECOMPRA = 0.05;
    const float UMBRAL_VENTA = 0.10;
    const float COMISION = 0.001;

    float precio_actual = 0.0, precio_compra_org = 0.0, precio_objetivo = 0.0, costo = 0.0, descuento = 0.0, precio = 0.0;
    int cantidad = 0;

    char compra = 'C', venta = 'V';
    char tipo_orden = compra || venta;
    
    printf("Ingrese el precio actual: ");
    scanf("%f", &precio_actual);
    printf("Ingrese el precio de compra: ");
    scanf("%f", &precio_compra_org);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    printf("Ingrese el tipo de orden (C para Compra, V para Venta): ");
    scanf(" %c", &tipo_orden);
    
    if (tipo_orden == venta) {
        printf("Ingrese el presio objetivo de venta: ");
        scanf("%d", &precio_objetivo);
        printf("\nA seleccionado Venta\n");
    }   else{
            printf("\nA seleccionado Compra\n");
    }

    if (tipo_orden == compra) {

        if (precio_actual <= precio_compra_org * (1 - UMBRAL_RECOMPRA)) {
            precio = precio_actual;
        } else {
            precio = precio_compra_org * (1 - UMBRAL_RECOMPRA);
        }
    } else{
        if (precio_actual >= precio_objetivo * (1 + UMBRAL_VENTA)) {
            precio = precio_actual;
        } else {
            precio = precio_objetivo * (1 + UMBRAL_VENTA);
        }
    }

    costo = (precio * cantidad * (1 + COMISION));
    descuento = costo - (costo * 0.05);

    printf("El costo total es: %.2f\n", costo);
    printf("El descuento del costo es: %.2f\n", descuento);
    
    printf("En conclusion el algoritmo permite a la gasolinera eliminar la subjetividad humana en la toma de decisiones,\n");
    printf("al evaluar automaticamente si el precio actual rompe los umbrales establecidos (5%% para compra y 10%% para venta)\n");
} 