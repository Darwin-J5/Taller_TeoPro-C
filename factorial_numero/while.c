#include <stdio.h>

int main() {
    int n;//variable que representa el valor del numero
    int fact = 1;//variable que representa el resultado del factorial
    int mult = 1;//variable que representa los numeros que se multiplicaran

    /*se presenta un mensaje que solicita que se ingrese el numero del
    que se quiera conocer su factorial*/
    printf("escriba el numero del que desea conocer su factorial: ");
    //lee el valor del numero
    scanf("%d", &n);

    /*se crea una condicion donde, si el numero leido es 0, se escriba
    directamente uno debido a que el factorial de 0 es 1*/
    if (n == 0) {
        printf("el factorial de 0 es: 1");
    } else {
        //de no ser asi, se presenta el numero factorial

        //se crea una variable para el bucle
        int i = 1;
        //se crea un bucle que y se repetira mientras que i sea menor o igual al numero ingresado
        while (i <= n) {
            //se presenta el primer numero de la variable mult
            printf("%d", mult);

            /*se crea una condicion donde, si i es mayor o igual a 1 y es menor al
            numero ingresado, se presente una "x" como simbolo de multiplicacion*/
            if (i >= 1) {
                if (i < n) {
                    printf(" x ");
                }
            }
            /*se actualiza el valor de fact multiplicandolo por mult y se aumenta
            por 1 el valor de mult*/
            fact = fact * mult;
            mult ++;
            //se incrementa por 1 el valor de la variable del bucle
            i ++;
        }

        //se presenta un mensaje que da el n valor en factorial y la respuesta
        printf(" = %d! = %d", n, fact);
    }
    return 0;
}