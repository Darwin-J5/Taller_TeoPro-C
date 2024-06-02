#include <stdio.h>
//se incluye la libreria math para operaciones matematicas
#include <math.h>

int main() {
    int n;//variable que representa el valor de la cantidad de numeros a sumar
    int qad;//variable que representa el cuadrado de los numeros
    int sum = 0;//variable que representa la suma de los numeros al cuadrado
    int v = 1;//variable que representa las bases de los numeros cuadrados a sumar

    //se presenta un mensaje donde se pide ingresar la cantidad de numeros al cuadrado a sumar
    printf("ingrese la cantidad de numeros cuadrados desde el 1 que desee sumar: ");
    //lee la cantidad de numeros al cuadrado a sumar
    scanf("%d", &n);

    /*se crea una condicion donde, si el valor de la variable n equivale a 0, entonces
    solo presente 0*/
    if (n == 0) {
        printf("%d", n);
    } else {
        /*de otro modo, se crea una variable para un bucle que se repetira mientras que
        i sea menor o igual al valor de la variable n*/
        int i = 1;
        while (i <= n) {

            //se le otorga el valor del cuadrado del numero actual de i a la variable qad
            qad = pow(i, 2);//pow representa la potencia, el primer valor es la base y el segundo el exponente
            //se presenta el valor actual de la base y se la eleva al cuadrado (^2)
            printf("%d^2", v);

            /*se crea una condicion donde, si el valor actual de i es mayor o igual a 0, pero menor al valor
            de la variable n, se presente un "+" como simbolo de suma*/
            if (i >= 0) {
                if (i < n) {
                    printf(" + ");
                }
            }
            //se aumenta en 1 el valor de la base y a la variable sum se le suma el valor actual de qad
            v ++;
            sum = sum + qad;
            //incrementa el valor de la variable del bucle por 1
            i ++;
        }
    }

    //se presenta el valor de la suma total de los valores al cuadrado
    printf(" = %d", sum);
    return 0;
}