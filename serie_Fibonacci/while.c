#include <stdio.h>

//se escribe una función que permitira calcular el siguiente termino de la serie
int f(int n) { //funciona con la variable n
    if (n <= 1) {
        //si el numero es menor o igual a 1, solo devolvera el munero mismo
        return n;
    } else {
        //caso contrario la funcion devolvera la suma de los 2 numeros anteriores
        return f(n - 1) + f(n - 2);
    }
}

int main() {
    int n; //variable de la cantidad de numeros a presentar

    //se presenta un mensaje para que se escriba la cantidad de numeros a presentar
    printf("escriba la cantidad de numeros a presentar: ");
    //lee la cantidad de numeros a presentar
    scanf("%d", &n);

    //se crea una variable para el bucle
    int i = 0;
    //se crea un bucle que se repetira mientras que i sea menor a n
    while (i < n) {
        printf("%d ", f(i)); //la i en f reemplaza el valor de n en la funcion
        //se incrementa por 1 el valor de la variable del bucle
        i ++;
    }

    return 0;
}