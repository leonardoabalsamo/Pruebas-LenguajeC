#include <stdio.h>
#include <math.h>

int main (){


/*Se ingresaran 100 numeros enteros. Sumar los de orden impar 1,3,5... por un lado y los de orden par 2,4,6... por otro.
Determinar cuales proporcionan la mayor suma*/



int NUMERO, PAR=0, IMPAR=0, CONT=0;

printf("\n\tIngrese un numero entero: ");
scanf("%d", &NUMERO);

while (CONT < 9 ){
    if (CONT%2==0){
        PAR = PAR + NUMERO;
    }
    else{
        IMPAR = IMPAR + NUMERO;
    }
    CONT ++;
    printf("\n\tIngrese un numero entero: ");
    scanf("%d", &NUMERO);
    }

if (PAR > IMPAR)
    printf("\n\n\tLos numeros impares determinan la mayor suma");
else
    printf("\n\n\tLos numeros impares determinan la mayor suma");

}
