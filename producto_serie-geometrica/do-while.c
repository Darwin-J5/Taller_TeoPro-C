#include <stdio.h>

int main() {
    int n;//variable que representa el valor de entrada
    int prod;//variable que representa el producto de la multiplicacion
    int p = 1;//variable que representa la multiplicacion de la progresion
    int mult = 2;//variable que cambia el valor de p en la progresion

    /*se presenta un mensaje que pide ingresar la cantidad de numeros de la 
    progrecion que se van a multiplicar*/
    printf("escriba la cantidad de numeros que desea multiplicar de la progresion 2, 4, 8...: ");
    //lee el valor de la cantidad pedida
    scanf("%d", &n);

    //se crea una condicion donde, si n equivale a 0, solo se presente 0
    if (n == 0) {
        printf("0");
    } else {
        /*de otro modo, se crea una variable para un bucle que se repetira
        mientras que esta sea menor o igual a n*/
        int i = 1;
        do {
            //presenta el valor de un numero de la progresion
            printf("%d", p);

            /*se crea una concidion donde, si i es mayor o igual a 1 pero menor
            que n, se presente una "x" como simbolo de la multiplicacion*/
            if (i >= 1) {
                if (i < n) {
                    printf(" x ");
                }
            }

            //se crea una condicion donde, si n equivale a 1, el producto total sea 1
            if (n == 1) {
                prod = p;
            } else {
                //de otro modo, el producto euquivaldra al producto del numero actual por el siguiente
                prod = p * p;
                //modifica el valor de p para que incremente el numero
                p = p * mult;
            }
            //se incrementa por 1 el valor de la variable del bucle
            i ++;
        } while (i <= n);
    }

    //se presenta el producto de la progresion
    printf(" = %d", prod);
    return 0;
}