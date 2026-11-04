#include <stdio.h>
#include <stdbool.h>

int main() {
/*Proceso donde se verifica que el numero entero sea divisible para 3 y 5 
posterior se divide para sacar la mitad del numero dado en el principio*/

    int c = 0;     
    bool es_divisible = 0;
    float mitad_resul = 0.0;
    
    printf("Ingrese un numero entero: \n");
    scanf("%d", &c);

    es_divisible = (c % 3 == 0) && (c % 5 == 0);
    
    if (es_divisible) {
        printf("El numero %d es divisible por 3 y por 5.\n", c);
    } else {
        printf("El numero %d no es divisible por 3 ni 5.\n", c);
    }
    mitad_resul =  c / 2.0;
    
    printf("La mitad del resultado del numero entero es: %.2f\n", mitad_resul);

    return 0;
}