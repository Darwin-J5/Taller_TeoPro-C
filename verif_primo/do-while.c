#include <stdio.h>

int main() {
    int a;//variable que representa el valor del numero a ingresar
    int cont;//variable que representa el contador de veces que el residuo del numero es 0

    //se presenta un mensaje que pida ingresar un numero para la verificacion
    printf("VERIVICADOR DE NUMEROS PRIMOS\n");
    printf("escriba un numero: ");
    //lee el valor del numero ingresado
    scanf("%d", &a);

    //otorgamos el valor 0 al contador
    cont = 0;

    //se crea una variable para el bucle
    int i = 1;
    //se crea un bucle que se repetira hasta quela variable sea menor o igual al valor del numero ingresado
    do {
        /*se crea una condicion que incrementa en 1 el valor del contador si el residuo entre el valor
        del numero ingresado y la variable 1 es 0*/
        if (a % i == 0) {
            cont++;
        }

        //se incrementa por 1 el valor de la variable del bucle
        i ++;
    } while (i <= a);
    //se crea una condicion que presenta que el numero es primo si el contador es menor o igual a 2
    if (cont <= 2) {
        printf("el numero %d es primo.", a);
    } else {
        //de otro modo, presenta que no es primo
        printf("el numero %d no es primo ", a);
        //presenta las veces que el residuo entre el numero y sus anteriores fueron 0
        printf("ya que fueron %d las veces en las que el residuo con cada uno de sus anteriores fue 0", cont);
    }
    return 0;
}