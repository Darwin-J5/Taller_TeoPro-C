#include <stdio.h>

int main() {
    int n;//variable que representa al valor que se va a ingresar
    int sum = 0;//variable que representa la suma de los numeros
    int imp = 1;//variable que representa los numeros impares

    //se presenta un mensaje donde pida ingresar la cantidad de numeros impares que se desee sumar
    printf("ingrese la cantidad de numeros impares desde el 1 que quiera sumar: ");
    //lee el valor de los numeros
    scanf("%d", &n);

    //se crea una condicion donde, si n equivale a 0, el valor total sea tambien 0
    if (n == 0) {
        printf("%d", n);
    } else {
        /*de otro modo, se crea una variable para un bucle que repetira mientras que su variable
        sea menor o igual al valor de la variable n*/
        int i = 1;
        while (i <= n) {

            //se presenta el numero que se encuentra en la variable imp
            printf("%d", imp);

            /*se crea una condicion donde, si el valor de i es mayor o igual a 1 pero
            menor que el valor de n, presente un "+" como simbolo de la suma*/
            if (i >= 1) {
                if (i < n) {
                    printf(" + ");
                }
            }

            /*a la variable de la suma se le sumara el valor actual de la variable imp y
            a la variable imp se le sumaran 2 numeros, esto para que el valor sea el siguiente
            numero impar de la secuencia*/
            sum = sum + imp;
            imp = imp + 2;
            //se incrementa el valor de la variable del bucle por 1
            i ++;
        }
    }

    //se presenta el resultado de la suma de los n numeros
    printf(" = %d", sum);
    return 0;
}