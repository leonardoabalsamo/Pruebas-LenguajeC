#include <stdio.h>
/*Se desea realizar un programa que utilice una funcion que calcule
y retorne el valor de X elevado a la potencia Y, siendo X e Y
enteros positivos y por lo tanto, dando un resultado entero.
Debido al rapido crecimiento del valor sera necesario retornar en
un valor unsigned long */

int potencia(int, int);

int main (){
int x, y, final;

    printf("\n Ingrese el valor de X: ");
    scanf("%d", &x);

    printf("\n Ingrese el valor de Y: ");
    scanf("%d", &y);

    final = potencia(x,y);

    printf("El valor de X elevado a la Y es: %d", final);
}
int potencia(int base, int exponente){
    if (exponente ==0) return 1;

    int i=0, resultado=1;


    while (i < exponente){
    resultado = resultado * base;
    i++;
    }
    return resultado;
}
