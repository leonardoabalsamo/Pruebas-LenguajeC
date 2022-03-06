/* MATRICES  */
/* TRANSFERENCIA DE MATRICES A FUNCION  */

#include <stdio.h>
#include <stdlib.h>

#define FILAS    8
#define COLUMNAS 8

void CARGAR ( int [][COLUMNAS] , int , int );
void MIRAR ( int [][COLUMNAS] , int , int );
int SUMADIAGONAL( int [][COLUMNAS], int , int );

int main()
{
		int MAT[FILAS][COLUMNAS] ;
		srand(567);

		CARGAR ( MAT , FILAS , COLUMNAS );
		MIRAR ( MAT , FILAS , COLUMNAS );
		getchar();
		printf(" \n LA SUMA TOTAL ES %d", SUMADIAGONAL ( MAT , FILAS , COLUMNAS));
		getchar();
		MIRAR ( MAT , FILAS , COLUMNAS );
		printf("\n\n\n\n\n");
		return 0 ;
}


void CARGAR ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;
		/*  CARGA DE LA MATRIZ  */
		for ( I = 0 ; I < F ; I++ )
				for ( J = 0 ; J < C ; J++ )
						M[I][J] = rand() % 100 ;
}


void MIRAR ( int M[][COLUMNAS] , int F , int C )
{
		int I , J ;
		/*  IMPRESION DE LA MATRIZ  */
		printf("\n\n\n        IMPRESION DE LA MATRIZ \n\n\n");
		for ( I = 0 ; I < F ; I++ ) {
				printf("\n\n\n\n\t");
				for ( J = 0 ; J < C ; J++ )
						printf("%8d" , M[I][J] );
		}
}

int SUMADIAGONAL( int M[][COLUMNAS], int F, int C) // La funci�n retorna la suma de la diagonal principal de la matriz cuadrada

{
        int SUMA =0, I, J;

        for ( I = 0 ; I < F ; I++ )
				for ( J = 0 ; J < C ; J++ )
						if ( J == I )
                            SUMA = SUMA + M[I][J];
        return SUMA;
}
