#include <stdio.h>
#include <math.h>

int main(){

/* Ingresar 10 valores por teclado. Indicar cual fue el
mayor y en que posición entró*/

float numero, mayor=0;
int posicion=0, cont=1;

printf("\n\n\t Ingrese el valor: ");
scanf("%f", &numero);

while (cont < 10){

    if (numero>mayor){
        mayor=numero;
        posicion=cont;

        }
    printf("\n\n\t Ingrese el valor: ");
    scanf("%f", &numero);
    cont++;

    }
printf("El mayor numero ingresado fue %f en la posicion numero %d", mayor, posicion);


}
