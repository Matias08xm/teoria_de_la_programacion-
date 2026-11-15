import java.util.Scanner;

public class Unidad_1 {
public static void main(String[] args){
    //Definición de Variables 
    int option = 0;
    float POR_IND = 0.30f; //Porcentaje del parámetro individual
    float POR_GRU = 0.30f; //Porcentaje del parámetro Grupal
    float POR_EVAL_FIN = 0.40f; //Porcentaje del parámetro de evaluación final
    float nota1, nota2, nota3, ind, gru, eval_fin, prom = 0.0f;
    //Presentar las opciones del nivel de desempeño
    System.out.println("Nivel de desempeño en base a su nota final");
    System.out.println("Excelente: 9.00 - 10.00");
    System.out.println("Muy bueno: 8.00 - 8.99");
    System.out.println("Bueno: 7.00 - 7.99");
    System.out.println("Regular: 5.00 - 6.99");
    System.out.println("Deficiente: 0.00 - 4.99 \n");

    Scanner sc = new Scanner(System.in); // Creamos 'sc' como tipo Scanner para capturar los datos de entrada
    //Solicitamos las notas del estudiante
        System.out.println("Ingrese su nota de Evaluacion Individual: ");
        nota1 = sc.nextFloat();
        System.out.println("Ingrese su nota de Trabajo Grupal: ");
        nota2 = sc.nextFloat();
        System.out.println("Ingrese su nota de Evaluacion Final: ");
        nota3 = sc.nextFloat();
    //Condicional para verificar que los datos ingresados sean los correctos
        if (nota1 < 0 || nota2 < 0 || nota3 < 0 || nota1 > 10 || nota2 > 10 || nota3 > 10 ) {
            System.out.println("Ingrese valores mayores a 0 y menores a 10");
        } else{
            ind = nota1 * POR_IND;
            gru = nota2 * POR_GRU;
            eval_fin = nota3 * POR_EVAL_FIN;
            prom = ind + gru + eval_fin;
        //Condicional para saber si el estudiante aprueba o no
        if (prom < 7) {
            System.out.println("\nEl estudiante requiere refuerzo academico");
            System.out.println("El estudiante reprobo");
        } else{
            System.out.println("El estudiante aprobo");
        }
        //Condicional en caso de que el estudiante obtenga una nota gratificante
        if (prom >= 9) {
            System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
        }

        option = (int) prom; //Convertimos el promedio de decimal a entero para poder usarlo en el switch
        //Uso del switch
        switch (option) { 
        case 10:
        case 9:
        System.out.println("Su nivel de desempeño es Excelente");
        break; //Terminamos el uso cada 'case'
        case 8:
        System.out.println("Su nivel de desempeño es Muy bueno");
        break;
        case 7:
        System.out.println("Su nivel de desempeño es Bueno");
        break;
        case 6:
        case 5:
        System.out.println("Su nivel de desempeño es Regular");
        break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        System.out.println("Su nivel de desempeño es Deficiente");
        break;
        default:
        break;
        }
        //Presentamos los datos solicitados por pantalla
        System.out.println("Evaluación Individual: " +nota1);
        System.out.println("Trabajo Grupal: " +nota2);
        System.out.println("Evaluación Final: " +nota3);
        System.out.println("Su promedio ponderado es: " +prom);
        }
        sc.close(); 
    } 
}
