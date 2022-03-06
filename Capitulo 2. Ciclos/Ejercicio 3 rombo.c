#include <stdio.h>

void main (){
float superficie=0, diagonal1=0, diagonal2=0;

printf("\n\tIngrese el valor de la primer diagonal: ");
scanf("%f", &diagonal1);
printf("\n\tIngrese el valor de la segunda diagonal: ");
scanf("%f", &diagonal2);

superficie = (float)diagonal1*diagonal2;

printf("\n\n\t La superficie del rombo es: %f", superficie);
printf("\n\n\n\n\n");
}
