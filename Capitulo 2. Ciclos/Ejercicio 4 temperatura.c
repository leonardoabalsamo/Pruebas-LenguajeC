#include <stdio.h>

void main (){
/*
Para convertir de �C a �F use la f�rmula: �F = �C x 1.8 + 32.
Para convertir de �F a �C use la f�rmula: �C = (�F-32) � 1.8.
Para convertir de K a �C use la f�rmula: �C = K � 273.15.
Para convertir de �C a K use la f�rmula: K = �C + 273.15 */

float temperatura, C=0, K=0, F=0, A,B;

printf("\n\n\t Ingrese el valor de temperatura a calcular: ");
scanf("%f", &temperatura);

A=(float)5/9;

C=temperatura;
F=(float)(C*1.8)+32;
K=(float)(C+273.15);
printf("\n\n\t Si el valor de temperatura ingresado estaba en Celsius:\n");
printf("\t El valor corresponde a %f Grados Farenheit o %f Grados Kelvin ", F,K);


F=temperatura;
K=(float)((F-32) * A) + 273.15;
C=(float)(F-32) / 1.8;
printf("\n\n\t Si el valor de temperatura ingresado estaba en Farenheit:\n");
printf("\t El valor corresponde a %f Grados Kelvin o %f Grados Celsius ",K,C);


K=temperatura;
F=(float)((K-273.15) * 1.8) + 32 ;
C=(float)K-273.15;
printf("\n\n\t Si el valor de temperatura ingresado estaba en Kelvin:\n");
printf("\t El valor corresponde a %f Grados Farenheit o %f Grados Celsius ",F,C);


printf("\n\n\n\n\n");
}
