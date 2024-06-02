#include <stdio.h>

int main(){
    int base;//variable para la base
    int ex;//bariable para el exponente

    //presenta un mensaje para que ingrese la base del valor
    printf("escriba la base: ");
    //lee el valor de la base
    scanf("%d", &base);
    //presenta un mensaje para que ingrese el exponente del valor
    printf("escriba el exponente: ");
    //lee el valor del exponente
    scanf("%d", &ex);

    int r = 1;//variable para la respuesta (inicia con valor 1 para multiplicarse despues)

    //si el exponente es 0, entonces solo se presentara el 1
    if (ex == 0) {
        printf("1");
    } else { //de no ser asi se continuara con la siguiente funcion
        //se crea una variable para el bucle
        int i = 1;
        //se crea un bucle que se repetira mientras la variable sea menor o igual al exponente
        while (i <= ex) {
             //presenta la base las veces que se repita el bucle
            printf("%d", base);
            //si el valor de i es mayor a 0...
            if (i > 0) {
                //...y a su vez es menor que el exponente
                if (i < ex) {
                    //se presentara un "x" para indicar el simbolo de la multiplicacion
                    printf(" x ");
                }
            }
            //el valor de r se multiplicara con la base consecutivamente
            r = r * base;
            //se aunmenta por 1 el valor de la variable del bucle
            i ++;
        }
    }

    //se presentara la respuesta despues de la sucecion
    printf(" = %d\n", r);
    //se presentara tambien la potencia junto con la respuesta
    printf("%d^%d = %d", base, ex, r);

    //se asegura que no haya errores en el programa
    return 0;
}