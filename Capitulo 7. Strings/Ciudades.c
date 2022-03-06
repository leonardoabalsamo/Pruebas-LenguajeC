#include <stdio.h>
#include <string.h>

#define FILAS 5
#define COLUMNAS 18

int main()
{
    int i;/*
    char CIUDAD[FILAS][COLUMNAS];

    strcpy (CIUDAD[0], "BUENOS AIRES");
    strcpy (CIUDAD[1], "RIO CUARTO");
    strcpy (CIUDAD[2], "GUATEMALA");
    strcpy (CIUDAD[3], "CHACO");
    strcpy (CIUDAD[4], "ECUADOR");
    /* Otra forma de asignación del vector de strings:*/

    char CIUDAD[][COLUMNAS] = {"BUENOS AIRES","RIO CUARTO","GUATEMALA","CHACO","ECUADOR"};

    for (i=0; i<FILAS; i++)
        printf("\n %s", CIUDAD[i]);

}
