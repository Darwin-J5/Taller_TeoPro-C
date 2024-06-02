#include <stdio.h>

int main() {
    int n;//variable que representa el numero hasta donde llega la secuencia
    int s = 1;//variable que representa el numero que se va a sumar
    int sum = 0;//variable que representa la suma total de la secuencia

    /*se presenta un mensaje que pide que se escriba la cantidad de
    numeros de la secuencia a sumar*/
    printf("escriba la cantidad de numeros que desea sumar de la secuencia 1,2,3...n: ");
    //lee el valor del numero de la secuencia
    scanf("%d", &n);

    //se crea una variable para el bucle
    int i = 1;
    //se crea un bucle que se repetira mientras que i sea menor o igual a n
    while (i <= n) {
        //se presenta el numero de la secuencia
        printf("%d", s);

        /*se crea una condicion donde, si i es mayor o igual a 1 pero menor que n
        se presente un "+", simbolo que representara la suma*/
        if (i >= 1) {
            if (i < n) {
                printf(" + ");
            }
        }
        //a la variable sum se le suma el valor de s y este se incrementara por 1
        sum = sum + s;
        s ++;
        //se incrementa por 1 el valor de la variable del bucle
        i ++;
    }

    //se presenta el valor de la suma total
    printf(" = %d", sum);
    return 0;
}