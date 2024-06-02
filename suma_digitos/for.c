#include <stdio.h>

int main() {
    int n; //variable del numero que vamos a desarmar para sumar
    int suma = 0; // variable que almacenara la suma de los numeros
    int t; //variable de apoyo para separar los numeros y sumarlos

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 10 digitos): ");
    scanf("%d", &n);

    for (int i = n; i > 0; i = i / 10) {
        /*i tendra el valor del numero inicial y se comenzara a
        separar los numeros dividiendolos para 10 hasta que ya no
        se pueda seguir dividiendo*/

        /*la variable t obtendra el valor del residuo de la division
        de i entre 10*/
        t = i % 10;

        //presentamos el digito obtenido de la division
        printf("%d", t);

        /*si despues de la division aun quedan digitos en i, se aplicara
        una condicion para que se le coloque un "+" entre el numero actual
        y el numero que sigue*/
        if (i >= 10) {
            printf(" + ");
        }
        
        /*a la variable de suma se le sumara el valor de t para que se
        lo pueda presentar al final*/
        suma = suma + t;
    }

    //presentamos el resultado con un mensaje
    printf(" = %d\n", suma);

    return 0;
}