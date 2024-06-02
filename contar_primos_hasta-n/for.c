#include <stdio.h>

//se crea una funcion para determinar si un número es primo
int esPrimo(int num) {
    //crea una condicion que evite presentar numeros menores o iguales a 1
    if (num <= 1) {
        return 0;
    }
    /*crea un bucle de i = 2 y se repetira hasta que i cuadrado sea mayor
    o igual al numero de la variable*/
    for (int i = 2; i * i <= num; i++) {
        /*crea una condicion que impide presentar los numeros cuyo residuo
        de la division con i sean 0*/
        if (num % i == 0) {
            return 0;
        }
    }
    //de otro modo, la funcion es verdadera
    return 1;
}

int main() {
    int n;//variable que representa el numero limite 

    //se presenta un mensaje que pide ingresar el valor de n
    printf("ingresa el número límite (n): ");
    //lee el valor del numero ingresado
    scanf("%d", &n);

    //se crea un bucledonde i = 2 que se repetira hasta que i sea mayor o igual a n 
    for (int i = 2; i <= n; i++) {
        /*se crea una condicion donde, si la funcion con respecto al valor
        actual de i es verdadera, se presente el valor de i*/
        if (esPrimo(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}