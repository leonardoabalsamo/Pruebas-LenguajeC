#include <stdio.h>
#include <math.h>

void main (){

/* Permitir el ingreso de 5 letras que componen una palabra.
Al finalizar mostrar en pantalla la palabra formada por los
codigos ASCII de cada letras a los que se le sumo el valor 5*/

int A, B, C, D, E;


printf("\n\n\tIngrese cinco letras y pulse enter: ");
A= getchar();
A=A+5;
B= getchar();
B=B+5;
C= getchar();
C=C+5;
D= getchar();
D=D+5;
E= getchar();
E=E+5;

printf(" La palabra formada es: %c%c%c%c%c", A,B,C,D,E);



printf("\n\n\n\n\n");
}
