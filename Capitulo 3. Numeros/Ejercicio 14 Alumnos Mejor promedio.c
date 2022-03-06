#include <stdio.h>
#include <math.h>

void main (){

/*INGRESAR LOS DATOS DE 10 ALUMNOS CONSISTENTES EN LEGAJO Y 8 NOTAS.
INDICAR CUAL ES EL ALUMNO DE MEJOR PROMEDIO*/


int i,legajo,n1,n2,n3,n4,n5,n6,n7,n8,mejoralumno,mejor,promedio;

for (i=0; i<10; i++){

    printf("\n\t Ingrese el legajo del alumno: ");
    scanf("%d", &legajo);
    printf("\nIngrese la primer nota del alumno: ");
    scanf("%d", &n1);
    printf("\nIngrese la segunda nota del alumno: ");
    scanf("%d", &n2);
    printf("\nIngrese la tercer nota del alumno: ");
    scanf("%d", &n3);
    printf("\nIngrese la cuarta nota del alumno: ");
    scanf("%d", &n4);
    printf("\nIngrese la quinta nota del alumno: ");
    scanf("%d", &n5);
    printf("\nIngrese la sexta nota del alumno: ");
    scanf("%d", &n6);
    printf("\nIngrese la septima nota del alumno: ");
    scanf("%d", &n7);
    printf("\nIngrese la ultima nota del alumno: ");
    scanf("%d", &n8);

    promedio=(n1+n2+n3+n4+n5+n6+n7+n8)/8;

    if(promedio>mejor){
        mejor=promedio;
        mejoralumno=legajo;

        }

    }
printf("\n\n\tEl mejor alumno tiene legajo %d y promedio %d", mejoralumno, mejor );
printf("\n\n\n\n\n");
}
