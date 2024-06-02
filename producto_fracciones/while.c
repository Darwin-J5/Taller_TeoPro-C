#include <stdio.h>

int main() {
    int n;//variable que representa la cantidad de n numeros a multiplicar
    int den = 1;//variable que representa el valor de la multiplicacion del denominador

    //se presenta un mensaje que pide que se ingrese la cantidad de fracciones a multiplicar
    printf("ingrese la cantidad de fracciones de 1/n que desee multiplicar: ");
    //lee el valor de la cantidad de numeros
    scanf("%d", &n);

    /*se crea una variable para un bucle que inicia desde i = 1 y se repetira mientras i sea menor o igual
    al valor asignado a n*/
    int i = 1;
    while (i <= n) {

        //se presenta el valor actual de 1/i
        printf("1/%d", i);

        /*se crea una condicion donde, si i es mayor o igual a o y menor que n, se presente
        un "x" como simbolo de multiplicacion*/
        if (i > 0) {
            if(i < n) {
                printf(" x ");
            }
        }

        //al valor del denominador total se le multiplicara el valor actual de i
        den = den * i;
        //se aumenta el valor de la variable del bucle por 1
        i ++;
    }

    //se presenta el producto de la multiplicacion
    printf(" = 1/%d", den);
    return 0;
}