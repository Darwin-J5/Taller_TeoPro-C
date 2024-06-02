#include <stdio.h>

int main() {
    int n; //variable del numero que vamos a desarmar para sumar
    int suma = 0; // variable que almacenara la suma de los numeros
    int t; //variable de apoyo para separar los numeros y sumarlos

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 10 digitos): ");
    scanf("%d", &n);

    //creamos un bucle que se repetira mientras la variable n sea mayor a 0
    do {
        /*a la variable t se le asigna el valor del residuo entre el valor
        actual de n dividido para 10*/
        t = n % 10;
        //se presenta el valor actual de t
        printf("%d", t);

        /*se crea una condicion donde, si el valor actual de n es mayor o igual
        a 10, se presente un "+" como simbolo de la suma*/
        if (n >= 10) {
            printf(" + ");
        }
        //a la variable suma se le suma el valor actual de t
        suma += t;
        //al valor actual de n se lo divide para 10
        n /= 10;
    } while (n > 0);

    //se presenta el valor total de la suma
    printf(" = %d", suma);
    return 0;
}