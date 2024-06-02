#include <stdio.h>

int main() {
    int n; //variable que representa el numero original
    int rn = 0; //variable que representara el numero invertido
    int r; //variable de apoyo para realizar la inversion

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 9 digitos): ");
    scanf("%d", &n);

    //invertimos el número usando un bucle
    for (int i = n; i != 0; i /= 10) {
        /*i sera el numero original, el cual sera dividido entre 10
        hasta que quede como valor 0*/
        
        //a r se le asignara el residuo de la division entre i y 10
        r = i % 10;

        /*al valor de rn se lo multiplicara por 10 para que se desplace
        un puesto hacia la izquierda y se le sumara el valor resultante
        de r*/
        rn = rn * 10 + r;

        /*este proceso se repetira sin problemas porque todas las variables
        estan declaradas como enteros, por lo que solo se mostrara la parte
        entera de la division al momento de repetirse el bucle*/
    }

    //presentamos un mensaje junto con el valor resultante
    printf("El número invertido es: %d\n", rn);

    return 0;
}