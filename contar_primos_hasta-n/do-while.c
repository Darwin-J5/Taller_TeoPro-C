#include <stdio.h>

//se crea una funcion para determinar si un número es primo
int esPrimo(int num) {
    //crea una condicion que evite presentar numeros menores o iguales a 1
    if (num <= 1) {
        return 0;
    }
    /*crea una variable para un bucle que se repetira mientras  i cuadrado sea menor
    o igual al numero de la variable*/
    int i = 2;
    do {
        /*crea una condicion que impide presentar los numeros cuyo residuo
        de la division con i sean 0*/
        if (num % i == 0) {
            return 0;
        }
        //eumentamos el valor de la variable del bucle por 1
        i ++;
    } while (i * i <= num);
    //de otro modo, la funcion es verdadera
    return 1;
}

int main() {
    int n;//variable que representa el numero limite 

    //se presenta un mensaje que pide ingresar el valor de n
    printf("ingresa el número límite (n): ");
    //lee el valor del numero ingresado
    scanf("%d", &n);

    //se crea una variable para un bucle que se repetira mientras que i sea menor o igual a n 
    int i = 2;
    do {
        /*se crea una condicion donde, si la funcion con respecto al valor
        actual de i es verdadera, se presente el valor de i*/
        if (esPrimo(i)) {
            printf("%d ", i);
        }
        //se aumenta el valor de la variable del bucle por 1
        i ++;
    } while (i <= n);
    return 0;
}