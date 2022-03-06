#include <stdio.h>
int potencia(int,int);
int main (){

/*12.
Ingresar por teclado un entero decimal positivo
Mostrarlo en pantalla en binario
resultado+= base;
resultado = resultado * base;
*/
int num,resto,cociente, binario=0, bit=0;

scanf("%d",&num);
cociente = num;
while(cociente>0){
    resto = cociente % 2;
    cociente = cociente / 2;
    binario += resto * potencia(10, bit);
    bit++;
    }
    printf("%d", binario);
}

int potencia(int base, int exponente){
    int resultado = base;
    if (exponente == 0) return 1;
    while(exponente > 1){
        resultado *= base;
        exponente --;
    }
    return resultado;
}
