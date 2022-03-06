#include <stdio.h>
#include <math.h>

void main (){

/* INGRESAR LOS DATOS DE ALUMNOS DE UN CURSO. CONSISTEN EN NOTA(int)
Y SEXO (char M/F). INDICAR SI EL MEJOR PROMEDIO PERTENECE A LOS
ALUMNOS O A LAS ALUMNAS. UTILIZAR switch PARA LA SELECCION*/


int i,j,s,sexo,mejorsexo,nota, mejornota;
char F,f,M,m;

printf("\n\n\t Ingrese la cantidad de alumnos que forman parte del curso: ");
scanf("%d", j);

for (i=0; i<j; i++){

    printf("\nIngrese la nota del alumno/a: ");
    scanf("%d", &nota);
    printf("\nIngrese el sexo M para masculino y F para femenino: ");
    sexo=getchar();

    if(nota>mejornota){
        mejornota=nota;
        mejorsexo=s;
        }

    }
switch (mejorsexo)
    case f: printf("\n\n\tEl mejor promedio pertenece al sexo Femenino");
        break;
    case F: printf("\n\n\tEl mejor promedio pertenece al sexo Femenino");
        break;
    case m: printf("\n\n\tEl mejor promedio pertecene al sexo Masculino");
        break;
    case M: printf("\n\n\tEl mejor promedio pertenece al sexo Masculino");
        break;
}
