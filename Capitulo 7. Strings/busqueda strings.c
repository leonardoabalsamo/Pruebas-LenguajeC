#include <stdio.h>
#include <string.h>


#define FILA 5
#define COLUMNA 20

int main (void)
{
    /* ingresar 20 strings que no superen los 20 caracteres cada uno incluyendo el nulo, al finalizar se debe mostrar en pantalla en orden inversor al ingreso
    */
    char VECTOR_STRING[FILA][COLUMNA];
    char PALABRA[COLUMNA];

    int i, AUX=1, POS=0;

    for(i=0; i<FILA; i++)
    {
        printf("\nIngrese un string que no supere los 20 caracteres: ");
        gets(VECTOR_STRING[i]);
    }
    printf("\n\n\n\nIngrese la palabra a buscar en el vector:");
    gets(PALABRA);
    for (i=0; i<FILA; i++)
    {
        if (strcmp(VECTOR_STRING[i], PALABRA)==0)
        {
            AUX=0;
            printf("%d\n", AUX);
            POS = i;
        }
    }

    if (AUX ==0)
        printf("\n LA PALABRA INGRESADA SE ENCUENTRA EN EL VECTOR EN LA POSICION %d", POS);
    else printf("\n LA PALABRA INGRESADA NO SE ENCUENTRA EN EL VECTOR");

    return 0;

}
