#include <stdio.h>
#define N 10

int main (){

    int VEC[N], i=0;

    while (i<N){
    printf("\nIngrese el numero:");
    scanf("%d", &VEC[i]);
    i++;
    }

    printf("\n\n IMPRESION DE LOS VALORES DEL VECTOR \n\n");
    i=0;

    while (i<N){
    printf("%2d", VEC[i]);
    i++;
    }
}
