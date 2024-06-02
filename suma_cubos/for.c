#include <stdio.h>
//se incluye la libreria math para operaciones matematicas
#include <math.h>

int main() {
    int n;//variable que representa el valor de la cantidad de numeros a sumar
    int qub;//variable que representa el cubo de los numeros
    int sum = 0;//variable que representa la suma de los numeros al cubo
    int v = 1;//variable que representa las bases de los numeros cubicos a sumar

    //se presenta un mensaje donde se pide ingresar la cantidad de numeros al cubo a sumar
    printf("ingrese la cantidad de numeros cubicos desde el 1 que desee sumar: ");
    //lee la cantidad de numeros al cubo a sumar
    scanf("%d", &n);

    /*se crea una condicion donde, si el valor de la variable n equivale a 0, entonces
    solo presente 0*/
    if (n == 0) {
        printf("%d", n);
    } else {
        /*de otro modo, se crea un bucle que parte desde i = 1 y se repetira hasta que
        i sea mayor o igual al valor de la variable n*/
        for (int i = 1; i <= n; i ++) {

            //se le otorga el valor del cubo del numero actual de i a la variable qub
            qub = pow(i, 3);//pow representa la potencia, el primer valor es la base y el segundo el exponente
            //se presenta el valor actual de la base y se la eleva al cubo (^3)
            printf("%d^3", v);

            /*se crea una condicion donde, si el valor actual de i es mayor o igual a 0, pero menor al valor
            de la variable n, se presente un "+" como simbolo de suma*/
            if (i >= 0) {
                if (i < n) {
                    printf(" + ");
                }
            }
            //se aumenta en 1 el valor de la base y a la variable sum se le suma el valor actual de qub
            v ++;
            sum = sum + qub;
        }
    }

    //se presenta el valor de la suma total de los valores al cubo
    printf(" = %d", sum);
    return 0;
}