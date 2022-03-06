#include <stdio.h>
#include <math.h>

int main (){
/*Realice un programa para ingresar el total de una
factura(float) y el porcentaje a descontar(float)
Mostrar en pantalla el precio final. EJ: factura $120
y descuento 8.8% el precio final es $109.44*/

float factura, descuento, precio, total;

printf("\n\n\t Ingrese el valor de la factura: ");
scanf("%f", &factura);
printf("\n\n\t Ingrese el porcentaje de descuento: ");
scanf("%f", &descuento);

precio = (factura * descuento) /100;
total = factura - precio;

printf("\n\n\tEl precio final es: %f", total);
printf("\n\n\n\n\n");
}
