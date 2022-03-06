#include <stdio.h>
#include <math.h>
/* Utilizar la función para construir otra funcion que reciba
dos numeros enteros positivos y retorne la cantidad de numeros
primos que se encuentran entre ellos */


int primo(int);
int cant_primo(int, int);

int main(){
int a,b, total;

printf("\n\n Ingrese el primer valor: ");
scanf("%d", &a);

printf("\n\n Ingrese el segundo valor: ");
scanf("%d", &b);

if (a>0 && b>0){
    total = cant_primo(a,b);
    printf("\nLa cantidad de numeros primos entre los valores ingresados es %d", total);
    }
else
printf("\n\nEl numero ingresado NO es un numero entero positivo");
}
int cant_primo(a,b){
    int x,y,i,j, suma, valor;
    x=a;
    y=b;
    if(x>y){
        for(i=y+1; i<x; i++){
            valor=i;
            if(primo(valor)==1)
                suma = suma + 1;
        }
    }
    else {
        for(j=x+1; j<y; j++){
        valor=j;
        if(primo(valor)==1){
            suma = suma + 1;
            }
        }
    }
    return suma;
}

int primo(int valor){
    int div, valor2;
    valor2=valor;
    if (valor>0){
    for(div=2; div < valor2; div++){
        if(valor2 % div == 0)
        return 0;
    }
    return 1;
    }
}
