#include <stdio.h>
#include <math.h>

int main (){


/*Se ingresaran numeros enteros positivos. Determinar cuantos de estos son pares. El ingreso finalizará con un numero negativo*/



int NUMERO, PAR=0;

printf("\n\tIngrese un numero entero positivo: ");
scanf("%d", &NUMERO);

while (NUMERO > 0){

    if (NUMERO%2==0)
        PAR = PAR++;
    printf("\n\n\tIngrese un numero entero positivo: ");
    scanf("%d", &NUMERO);
    }

printf("Se ingresaron %d Numeros pares", PAR);

}
