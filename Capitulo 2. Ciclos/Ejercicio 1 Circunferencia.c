#include <stdio.h>

void main (){
float radio, longitud=0, superficie=0, pi=3.1415926535;

printf("\n\n\tIngrese el radio de la circunferencia: ");
scanf("%f", &radio);

longitud = (float)2*pi*radio;
superficie = (float)pi*(radio*radio);

printf("\n\n\t La longitud de la circunferencia es: %f",longitud);
printf("\n\n\t La superficie de la circunferencia es: %f", superficie);
printf("\n\t Muchas gracias");

}
