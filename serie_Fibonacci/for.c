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

    //se crea un bucle que inicia con i = 0 y se repetira hasta que i sea mayor a n
    for (int i = 0; i < n; i++) {
        printf("%d ", f(i)); //la i en f reemplaza el valor de n en la funcion
    }

    return 0;
}