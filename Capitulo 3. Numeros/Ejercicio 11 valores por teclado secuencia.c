#include <stdio.h>
#include <math.h>

int main(){

/* Ingresar 10 valores por teclado.
Indicar si la secuencia es creciente*/


float numero, creciente=0;
int posicion=0, cont=1, flag=1;

printf("\n\n\t Ingrese el valor: ");
scanf("%f", &numero);

while (cont < 10){

    if (numero>creciente){
        creciente=numero;
        flag++;

        }
    printf("\n\n\t Ingrese el valor: ");
    scanf("%f", &numero);
    cont++;

    }
if(flag==10)
    printf("La secuencia es creciente");
else
    printf("La secuencia no es creciente");
}
