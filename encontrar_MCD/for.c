#include <stdio.h>

int main() {
    int n1;//variable que representa el primer numero
    int n2;//variable que representa el segundo numero
    int mcd = 1;//variable que representara el valor del MCD
    int min;//variable que nos permitira conocer el numero menor

    //se preseta un mensaje donde se pide ingresar el primer valor
    printf("ingrese el primer numero: ");
    //lee el primer valor
    scanf("%d", &n1);
    //presenta un mensaje donde se pide ingresar el segundo valor
    printf("ingrese el segundo numero: ");
    //lee el segundo valor
    scanf("%d", &n2);

    /*se crea 2 condiciones donde, si los numeros 1 y 2 son menores a 0,
    se multipliquen por -1, esto para poder calcular el MCD de manera eficiente*/
    if (n1 < 0) {
        n1 = n1 * (-1);
    }
    if (n2 < 0) {
        n2 = n2 * (-1);
    }

    /*se crea una condicion donde, si el primer numero es menor que el segundo,
    el valor de la variable min sera el del primer numero, de otro modo, el valor
    de dicha variable sera el del segundo*/
    if (n1 < n2) {
        min = n1;
    } else {
        min = n2;
    }

    /*se crea un bucle que se repetira hasta que la variable i = 1 sea mayor o igual
    al valor del numero de la variable min*/
    for (int i = 1; i <= min; i++) {

        /*se crea una condicion donde, si el residuo del primer y segundo numero divididos
        para el valor actual de i es 0, la variable de MCD tomara el valor actual de i como suyo*/ 
        if (n1 % i == 0) {
            if (n2 % i == 0) {
                mcd = i;
            }
        }
    }

    //se presenta el resultado de la operacion
    printf("el maximo comun divisor de %d y %d es: %d\n", n1, n2, mcd);
    return 0;
}