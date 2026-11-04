#include <stdio.h>

void main (){
    //Declaración de variables 
    float C1 = 0.0;
    float C2 = 0.0;
    float C3 = 0.0;
    float NL= 0.0;
    float NC= 0.0;
    float NF= 0.0;
    
    //Solisitar datos al usuario 
    printf("Ingrese la nota del primer certamen:\n");
    scanf("%f", &C1);

    printf("Ingrese la nota del segundo certamen:\n");
    scanf("%f", &C2);

    printf("Ingrese la nota de laboratorio:\n");
    scanf("%f", &NL);
    
    //Cálculos para la resolución del problema
    C3= ((3*(60-(NL * 0.3))) / 0.7) - C1 - C2; //Se despeja C3 usando las 2 formulas planteadas
    NC= (C1 + C2 + C3) / 3;
    NF= (NC * 0.7) + (NL * 0.3); //Debe dar como resultado 60/100, nota mínima para aprobar la materia 

    //Presentar los resultados
    
    printf("La nota minima que debes sacar en el tercer certamen es: %.2f\n", C3); /*/Si sale negativo, 
    aprueba con las notas actuales, y si sale mas de 100 reprobó/*/

    printf("Su promedio de certamenes es: %.2f\n", NC);
    printf("Su nota final es:%.2f /100\n", NF);
}