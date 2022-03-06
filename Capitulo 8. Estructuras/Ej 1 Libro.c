#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
Los datos de los 130 integrantes de las divisiones inferiores de un club se encuentran
almacenados en un vector de estructuras de la siguiente manera:

nombre(20) , sexo (char) , fecha de nacimiento (estructura tipo fecha: int dia, int mes, int año)

Se pide mostrar los nombres discriminados por sexo y categoría sabiendo que juveniles
incorpora hasta los nacidos en 2005. Cadetes hasta 2007 e infantiles hasta 2009. */

#define N 20

struct fecha{
        int dia;
        int mes;
        int anio;
};


struct integrante {
        char nombre[20];
        char sexo;
        struct fecha NAC;
};
void carga (struct integrante [] , int );
void juveniles (struct integrante [] , int );
void cadetes (struct integrante [] , int );
void infantiles (struct integrante [] , int );

int main ()
{
        struct integrante V[N];


        carga (V , N );

        getchar();
        juveniles ( V, N );

        cadetes ( V , N );
        infantiles ( V, N );
}
/*Se carga el vector */

void carga (struct integrante VEC[] , int NUM)
{
   int I, J;

   char NOM[][20] = { "GASTON" , "LEONARDO" , "JAVIER" , "CARLOS" , "MATIAS" , "ROBERTO" , "FACUNDO" , "NICOLAS" , "SEBASTIAN" ,
                "ARIEL" , "DANIEL" , "MARTIN" , "BRUNO" , "FELIPE" , "JOAQUIN" , "FEDERICO" , "AGUSTIN" , "PABLO" , "DARIO" , "FERNANDO" };


   for (I=0 ; I<NUM ; I++)
        strcpy(VEC[I].nombre, NOM[I]);

   for (I=0 ; I<NUM ; I++)
   {
        if (rand()%2 == 0) VEC[I].sexo = 'M';
        else VEC[I].sexo = 'F';
        VEC[I].NAC.dia = 1 + rand()%30;
        VEC[I].NAC.mes = 1 + rand()%13;
        VEC[I].NAC.anio = 2000 + rand()%10;
   }
   printf("\n\n\n\tNOMBRE: \tSEXO: \t\tFECHA DE NACIMIENTO");
   printf("\n\n\n");

   for (I=0 ; I<NUM ; I++)
    printf("\n %-15s \t%c \t\t%2d / %2d / %2d", VEC[I].nombre , VEC[I].sexo , VEC[I].NAC.dia , VEC[I].NAC.mes , VEC[I].NAC.anio);
    fflush(stdin);

    printf("\n\n\n\n");
}


/*Se pide mostrar los nombres discriminados por sexo y categoría sabiendo que juveniles incorpora hasta los nacidos en 2005*/

void juveniles (struct integrante VEC[] , int NUM)

{
    int I, J;
    struct integrante AUX;

    for(I=0 ; I<NUM-1 ; I++)
        for(J=0 ; J<NUM-I-1 ; J++)
            if (VEC[J].sexo > VEC[J+1].sexo)
                {
                  AUX = VEC[J];
                  VEC[J] = VEC[J+1];
                  VEC[J+1] = AUX;
                }

    for(I=0 ; I<NUM ; I++)
        if (VEC[I].NAC.anio <= 2005)
                        printf("\n %-15s \t%c \t\t%2d / %2d / %2d", VEC[I].nombre , VEC[I].sexo , VEC[I].NAC.dia , VEC[I].NAC.mes , VEC[I].NAC.anio);
      printf("\n\n\n\n");
}



void cadetes (struct integrante VEC[] , int NUM)

{
        int I, J;
    struct integrante AUX;

    for(I=0 ; I<NUM-1 ; I++)
        for(J=0 ; J<NUM-I-1 ; J++)
            if (VEC[J].sexo > VEC[J+1].sexo)
                {
                  AUX = VEC[J];
                  VEC[J] = VEC[J+1];
                  VEC[J+1] = AUX;
                }

    for(I=0 ; I<NUM ; I++)
        if (VEC[I].NAC.anio <= 2007)
                        printf("\n %-15s \t%c \t\t%2d / %2d / %2d", VEC[I].nombre , VEC[I].sexo , VEC[I].NAC.dia , VEC[I].NAC.mes , VEC[I].NAC.anio);
    printf("\n\n\n\n");
}
void infantiles (struct integrante VEC[] , int NUM)

{
    int I, J;
    struct integrante AUX;

    for(I=0 ; I<NUM-1 ; I++)
        for(J=0 ; J<NUM-I-1 ; J++)
            if (VEC[J].sexo > VEC[J+1].sexo)
                {
                  AUX = VEC[J];
                  VEC[J] = VEC[J+1];
                  VEC[J+1] = AUX;
                }

    for(I=0 ; I<NUM ; I++)
        if (VEC[I].NAC.anio <= 2009)
                        printf("\n %-15s \t%c \t\t%2d / %2d / %2d", VEC[I].nombre , VEC[I].sexo , VEC[I].NAC.dia , VEC[I].NAC.mes , VEC[I].NAC.anio);

    printf("\n\n\n\n");
}


