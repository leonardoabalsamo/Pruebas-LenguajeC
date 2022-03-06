#include <stdio.h>

void main (){
int promedio=0, valor1=0, valor2=0, valor3=0;

printf("\n\tIngrese el primer valor: ");
scanf("%d", &valor1);
printf("\n\tIngrese el segundo valor: ");
scanf("%d", &valor2);
printf("\n\tIngrese el tercer valor: ");
scanf("%d", &valor3);

promedio = (valor1 + valor2 + valor3)/3;

printf("\n\n\t El promedio de los valores ingresados es: %d", promedio);
printf("\n\n\n\n\n");
}
