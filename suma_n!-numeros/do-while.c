#include <stdio.h>

int main() {
    int n;//variable que representa la cantidad de factoriales a sumar
    int sfact;//variable que representa la suma de lso factoriales
    int fact;//variable que representa el factorial de un numero
    int mult;//variable de multiplicacion de los numeros para obtener el factorial

    //se presenta un mensaje que pide ingresar la cantidad de factoriales a sumar
    printf("escriba la cantidad de los factoriales que desea sumar: ");
    //lee el valor de la cantidad de factoriales
    scanf("%d", &n);

    //se crea una condicion donde, si n equivale a 0, el valor de la suma tambien
    if (n == 0) {
        printf("0");
    } else {
        /*de otro modo, se crea una variable para un bucle que se repetira mientras
        i sea menor o igual a n*/
        int i = 1;
        do {
            //se imprime el valor actual de i junto con el "!" del factorial
            printf("%d!", i);
           
           //se actualiza el valor de fact y mult a 1 para realizar las multiplicaciones
            fact = 1;
            mult = 1;

            /*se crea una variable para un bucle que se repetira mientras j sea menor o igual
            al valor actual de i*/
            int j = 1;
            do {
                /*se multiplicara el valor actual de fact por mult e incrementara
                mult en 1 para multiplicar por el siguiente numero de factorial*/
                fact = fact * mult;
                mult ++;
                //se incrementa el valor de la variable del bucle por 1
                j ++;
            } while (j <= i);

            /*se crea una condicion donde, si i es mayor o igual a 0 y menor a n,
            se presente un "+" como simbolo de la suma*/
            if (i >= 0) {
                if (i < n) {
                    printf(" + ");
                }
            }

            //se actualiza el valor de sfact sumandole el valor actual de fact
            sfact = sfact + fact;
            //se incrementa el valor de la variable del bucle por 1
            i ++;
        } while (i <= n);
        //se presenta un igual para dar comienzo a las respuestas de los factoriales
        printf(" = ");

        /*se actualiza el valor de fact y mult para presentar
        las respuestas de cada factorial*/
        fact = 1;
        mult = 1;

        //se cre una variable para el bucle
        int k = 1;
        //se crea un bucle que se repetira mientras k sea menor o igual a n
        do {
            /*se vuelve a actializar los valores multiplicando fact por mult
            e incrementando el valor de mult por 1*/
            fact = fact * mult;
            mult ++;

            //se presenta el factorial del numero actual de k
            printf("%d", fact);

            /*se crea una condicion donde, si k es mayor o igual a 0 y menor
            a n, se presente un "+" como simbolo de la suma*/
            if (k >= 0) {
                if (k < n) {
                    printf(" + ");
                }
            }
            //se aumenta el valor de la variable del bucle por 1
            k ++;
        } while (k <= n);
        //se presenta el resultado de las sumas de los factoriales
        printf(" = %d", sfact);
    }
    return 0;
}