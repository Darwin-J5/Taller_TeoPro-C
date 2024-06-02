#include <stdio.h>

int main() {
    int n; //variable que representa el numero original
    int rn = 0; //variable que representara el numero invertido
    int r; //variable de apoyo para realizar la inversion

    //solicitamos que se ingrese un número
    printf("Ingresa un número (maximo de 9 digitos): ");
    scanf("%d", &n);

    //creamos un bucle que se repetira mientras n sea diferente de 0
    do {
       /*la variable r tomara como valor del residuo entre el valor
        actual de n dividido para 10*/ 
        r = n % 10;
        /*el valor del numero inverso rn se multiplicara por 10 y se
        le sumara el valor actual de r*/
        rn = rn * 10 + r;
        /*el valor del numero actual n se dividira para 10*/
        n /= 10;
    } while (n != 0);

    //se presentara el reverso del numero
    printf("El número invertido es: %d", rn);
    return 0;
}