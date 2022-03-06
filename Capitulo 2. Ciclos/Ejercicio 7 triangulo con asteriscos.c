#include <stdio.h>
#include <math.h>

int main (){
/* Realice un programa que dibuje en pantalla un triangulo
rectangulo utilizando asteriscos de esta forma:
*
**
***
****
*/

int A,B,VALOR;
printf("\n\n Defina el valor del triangulo: ");
scanf("%d", &VALOR);
for (A=0; A<VALOR; A++){

        for(B=1;A>=B;B++){
        printf("*");
        }
        printf("*\n");
    }


printf("\n\n\n\n\n");
}
