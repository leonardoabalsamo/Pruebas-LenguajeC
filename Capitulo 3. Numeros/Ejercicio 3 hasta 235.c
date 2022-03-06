#include <stdio.h>
#include <math.h>

int main (){


/*Se ingresaran numeros enteros hasta que se ingrese el 235. Indicar cuantas veces ocurrio el ingreso del numero 23*/



int NUMERO, SUMA=0;

printf("\n\tIngrese un numero entero: ");
scanf("%d", &NUMERO);

while (NUMERO!=235){
    if (NUMERO==23)
        SUMA ++;
    printf("\n\tIngrese un numero entero: ");
    scanf("%d", &NUMERO);
    }

printf("\n\n\tEl numero 23 se ingreso %d veces",SUMA);
}
