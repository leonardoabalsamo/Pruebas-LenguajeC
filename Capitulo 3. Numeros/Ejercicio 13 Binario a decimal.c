#include <stdio.h>

int potencia(int,int);

int main (){
int decimal=0, resto, bit=0;
int binario;
scanf("%d", &binario);

    while (binario > 0){
        resto = binario % 10;
        decimal = decimal + resto * potencia(2, bit);
        printf("%d %d %d \n", bit, resto, decimal);
        bit++;
        binario = binario / 10;

    }
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
