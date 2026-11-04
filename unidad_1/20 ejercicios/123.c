#include <stdio.h>

int main() {

    float FACTOR_ZONA = 0.7;
    int edad = 0;
    int fcm = 0;
    float zona = 0.0;
    float suma = 0.0;
    
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    
    fcm = 220 - edad;
    zona= fcm * FACTOR_ZONA;
    suma = fcm + zona;

    printf("Su FCM es: %d \n", fcm);
    printf("Su zona de entrenamiento es: %f \n", zona);
    printf("La suma de los resultados es: %.2f \n", suma);
}