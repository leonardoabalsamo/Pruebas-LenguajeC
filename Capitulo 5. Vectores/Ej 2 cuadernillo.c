#include <stdio.h>
#define N 20



/* INGRESE 20 VALORES ENTEROS Y POSTERIORMENTE UN VALOR ENTERO ADICIONAL AL QUE
LLAMAREMOS DIV. INDIQUE CUANTOS COMPONENTES DEL VECTOR SON DIVISIBLES POR DIV */

int main (){

    int i, j, DIV, SUMA=0;
    int VEC[N];
    printf("\n\n INGRESE DE LOS VALORES DEL VECTOR: \n");

    for (i=0; i<N; i++)
    {
        scanf("%d", &VEC[i]);
    }


    printf("\n\n INGRESE EL VALOR ENTERO ADICIONAL DIV: ");
    scanf("%d", &DIV);
    getchar();


    for (i=0; i<20; i++)
    {
        if (VEC[i]%DIV == 0) SUMA++;
    }
    getchar();

    printf("\n\n EXISTEN %d VALORES DEL VECTOR QUE SON DIVISIBLES POR DIV", SUMA);

    return 0;


}

