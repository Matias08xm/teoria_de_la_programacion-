import java.util.Scanner;
public class Nota {
    public static void main(String[] args) {
        float nota_1, nota_2, nota_3, menor, suma_total, promedio = 0.0f;

        Scanner sc = new Scanner(System.in);

            System.out.println("Ingrese la primera nota:");
            nota_1 = sc.nextFloat();
            System.out.println("Ingrese la segunda nota:");
            nota_2 = sc.nextFloat();
            System.out.println("Ingrese la tercera nota:");
            nota_3 = sc.nextFloat();

            if(nota_1 <= nota_2 && nota_1 <= nota_3){
                menor = nota_1;               
            } else if(nota_2 <= nota_1 && nota_2 <= nota_3){
                menor = nota_2;
            } else{
                menor = nota_3;
            } 
            suma_total = nota_1 + nota_2 + nota_3;
            promedio = (suma_total - menor) / 2;

            System.out.println("El promedio final del estudiante es: "+promedio+"");

        sc.close();
    }
}
