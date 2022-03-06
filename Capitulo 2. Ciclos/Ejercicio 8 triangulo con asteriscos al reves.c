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

int tamanio, i,j;
printf("\n\n Defina el valor del triangulo: ");
scanf("%d", &tamanio);
for (i=0; i<tamanio; i++){

        for(j=0;j<(tamanio-(i+1));j++){
            printf(" ");
                }
        for(j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }


printf("\n\n\n\n\n");
}
