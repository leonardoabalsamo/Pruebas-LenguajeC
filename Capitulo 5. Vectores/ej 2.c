#include <stdio.h>
#define N 6

int main (){


int VEC[N] = {45, 32, 24, 56, 25, 90};
int I;
printf("\n\n\n\n CARGA DE VALORS POR FUERA DEL VECTOR \n\n");
VEC[6] = 76566;
VEC[7] = 77;
VEC[8] = 88;
printf("\t %10d %10d %10d", VEC[6], VEC[7], VEC[8]);
getchar();


printf("\n\n\n\n IMPRESION DE LOS VALORES DEL VECTOR \n\n");

for (I=0; I<N+3; I++){
    printf("%10d", VEC[I]);
    }
getchar();

printf("\n\n\n\n FIN DEL PROGRAMA\n\n\n\n");
}
