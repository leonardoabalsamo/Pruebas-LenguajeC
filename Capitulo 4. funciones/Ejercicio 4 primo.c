#include <stdio.h>
#include <math.h>
/* Construir una funcion que reciba un entero positivo y
retorne 1 si este es primo o 0 en caso contrario */


int primo(int);

int main(){
int valor;

printf("\n\n Ingrese el valor: ");
scanf("%d", &valor);
if (valor >0){

    if (primo(valor)==1)
    printf("\n\nEl numero ingresado es un numero primo");
    else
    printf("\n\nEl numero ingresado NO es un numero primo");

}
else
printf("\n\nEl numero ingresado NO es un numero entero positivo");
}


int primo(int valor){
    int div;

    for(div=2; div < valor; div++){
        if(valor % div == 0)
        return 0;
    }
    return 1;
}
