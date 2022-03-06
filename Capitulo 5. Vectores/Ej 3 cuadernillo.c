#include <stdio.h>
#define N 10

int PROMEDIO (int [N] , int );

/* REALIZAR UNA FUNCION QUE RECIBA UN VECTOR DE ENTEROS Y SU LONGITUD Y RETORNE EL PROMEDIO DE SUS VALORES */

int main (){
    int VEC[N], i;

    for (i=0; i<N; i++)
    {
        scanf("%d", &VEC[i]);
    }

    printf("\n\n EL PROMEDIO DE LOS VALORES INGRESADOS ES: ",  PROMEDIO(VEC, N));
}

int PROMEDIO (int VECTOR[], int A)
{
    int i, SUMA=0, PROM;
    for (i=0; i<N; i++)
    {
        SUMA = SUMA + VECTOR[i];
    }
    PROM = SUMA / N;
    return PROM;
}
