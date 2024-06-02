#include <stdio.h>

int main() {
    int n;//valor que representa el numero que se va a ingresar
    int cont = 0;//valor que representa el contador para el numero

    //se presenta un mensaje donde se pide ingresar un numero
    printf("escriba un numero: ");
    //se lee el numero ingresado
    scanf("%d", &n);

    //se crea una condicion donde, si n equivale a 0, el contador marque solo 1
    if (n == 0) {
        cont = 1;
    } else {
        /*de otro modo, se crea un bucle donde n se ira dividiendo para 10
        hasta que equivalga a 0*/
        for (n; n != 0; n = n / 10) {
            //el valor del contador incrementara por 1
            cont ++;
        }
    }

    //se presenta la cantidad de digitos del numero escrito
    printf("el numero de digitos de el numero es: %d", cont);
    return 0;
}