#include <stdio.h>
#define N 20



/* INGRESE 20 VALORES ENTEROS Y MUESTRELOS EN PANTALLA EN UNA LÍNEA, EN EL
ORDEN DE INGRESO, Y EN LA LÍNEA SIGUIENTE, EN EL ORDEN INVERSO AL INGRESO */

int main (){

    int i, j;
    int VEC[] = {1,0,5,9,6,1,4,7,8,5,23,65,5,44,5,563,5,6,7,20};
    printf("\n\n IMPRESION DE LOS VALORES DEL VECTOR: \n");

    for (i=0; i<20; i++)
    {
        printf("%4d", VEC[i]);
    }
    getchar();

    printf("\n\n IMPRESION INVERSO DE LOS VALORES DEL VECTOR: \n");

    for (j=19; j>=0; j--)
    {
        printf("%4d", VEC[j]);
    }
    getchar();

    return 0;


}

