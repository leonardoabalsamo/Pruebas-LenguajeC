#include <stdio.h>
#include <math.h>

void main (){

 /*Determinar el diametro de un circulo ingresando la superficie con la funcion sqrt()*/
 float superficie, A, pi=3.145926535, radio, diametro;

printf("\n\n\t Ingrese la superficie del circulo: ");
scanf("%f", &superficie);

A=(float)superficie/pi;

radio = sqrt(A);
diametro = 2 * radio;
printf("\n\n\t El diametro del circulo es: %f", diametro);



printf("\n\n\n\n\n");
}
