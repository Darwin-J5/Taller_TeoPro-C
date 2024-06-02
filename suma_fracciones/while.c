#include <stdio.h>

//se crea una funcion para calcular el máximo común divisor (MCD)
int mcd(int a, int b) {
    if (b == 0){
        return a;
    } return mcd(b, a % b);
}

int main() {
    int n;//variable que representa al valor ingresado
    int num = 0;//variable que representa el numerador de la suma
    int den = 1;//variable que representa el denominador de la suma

    //se presenta un mensaje donde se pide ingresar la cantidad de terminos a sumar
    printf("ingrese la cantidad de fracciones de 1/n a sumar: ");
    //se lee el valor de dicha cantidad
    scanf("%d", &n);

    //se crea una variable para el bucle
    int i = 1;
    //se crea un bucle que inicia desde i = 1 y se repetira mientras i sea menor o igual a n
    while (i <= n) {

        //se presenta el valor actual de n en la fraccion
        printf("1/%d", i);

        /*se crea una condicion donde, si el valor actual de i es mayor o igual a 0
        y a suvez menor que el valor de n, se presente un "+" como simbolo de la suma*/
        if (i >= 0) {
            if (i < n) {
                printf(" + ");
            }
        }

        //el valor del numerador se multoplicara por el de i y se le sumara el del denominador
        num = num * i + den;
        //el valor del denominador se le multiplicara por i
        den *= i;

        //se crea una variable que equivalga a la funcion MCD entre el numerador y el denominador
        int divisor = mcd(num, den);
        //se divide el numerador y el denominador para la variable de division
        num /= divisor;
        den /= divisor;
        //se incrementa el valor de la variable del bucle por 1
        i ++;
    }

    //se presenta el resultado de la suma de las fracciones
    printf(" = %d/%d", num, den);

    return 0;
}