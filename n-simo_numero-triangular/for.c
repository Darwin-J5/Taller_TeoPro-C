#include <stdio.h>

int main() {
    int n;//variable que representa la cantidad de numeros a sumar
    int sum = 0;//variable que representa el valor del numero triangular de n

    //se presenta un mensaje que pide que se ingrese el valor de n
    printf("ingrese el valor de n: ");
    //lee el valor de n
    scanf("%d", &n);

    //se crea un bucle donde i = 1 que se repetira hasta que i sea mayoy o igual a n
    for (int i = 1; i <= n; i ++) {

        //se presenta el valor actual de i
        printf("%d", i);

        /*se crea una condicion donde, si el valor actual de i es mayor o igual a 0
        y menor que n, se presente "+" como simbolo de la suma*/
        if (i >= 0) {
            if (i < n) {
                printf(" + ");
            }
        }
        //a la variable del numero triangular se le sumara el valor actual de i
        sum = sum + i;
    }
    //se presenta el valor del numero triangular
    printf(" = %d", sum);
    return 0;
}