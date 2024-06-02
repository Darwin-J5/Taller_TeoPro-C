#include <stdio.h>
//libreria que incluye operaciones matematicas
#include <math.h>

int main() {
    int base;//variable para la base
    int rad;//variable para el numero radical

    //presenta un mensaje para que se ingrese el numero base
    printf("escriba el numero base: ");
    //lee el valor de la base
    scanf("%d", &base);
    //presenta un mensaje para que se ingrese el valor de la raiz
    printf("escriba el numero de la raiz: ");
    //lee el valor de la raiz
    scanf("%d", &rad);

    int r = base;//variable para la respuesta
    int div = pow(base, 1.0 / rad);//variable a la que se le asigna la funcion pow, para elevar un valor a otro

    //una condicion que impida realizar la operacion si la raiz es menor o igual a 0
    if (rad <= 0) {
        printf("no se puede realizar esta raiz");
    } else {
        //una condicion que solo presente la base si el radical es 1
        if (rad == 1) {
            printf("%d", base);
        } else {
            //una condicion que impida realizar la operacion si el radical es par y la base menor a 0
            if (rad % 2 == 0) {
                if (base < 0) {
                    printf("no se puede realizar esta raiz");
                } else {
                    //si se cumple todo lo de arriba, se presenta la base como primer paso
                    printf("%d", base);

                    //se crea un bucle que se repetira hasta que la variable i = 1 sea mayor al valor radical
                    for (int i = 1; i < rad; i ++) {
                        /*una condicion que presenta un "/" despues del numero
                        si i es mayor o igual a 0 y si es menor al radical*/
                        if (i >= 0) {
                            if (i < rad) {
                                printf(" / ");
                            }
                        }
                        //se presentara el numero para el que la base se dividira sucesivamente
                        printf("%d", div);
                    }
                }
            } else {
                //si se cumple todo lo de arriba, se presenta la base como primer paso
                printf("%d", base);

                //se crea un bucle que se repetira hasta que la variable i = 1 sea mayor al valor radical
                for (int i = 1; i < rad; i ++) {
                    /*una condicion que presenta un "/" despues del numero
                    si i es mayor o igual a 0 y si es menor al radical*/
                    if (i >= 0) {
                        if (i < rad) {
                            printf(" / ");
                        }
                    }
                    //se presentara el numero para el que la base se dividira sucesivamente
                printf("%d", div);
                }
            }
        }
        //se presenta el valor final de las divisiones
        printf(" = %d\n", div);
        printf("%d^(1/%d) = %d", base, rad, div);
    }
    return 0;
}