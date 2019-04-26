#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	float X,N, Resultado;
	printf("\nQuadrado da multiplicação de dois números\n\n");
	printf("Digite o valor de X");
	scanf("%f",&X);
	printf("Digite o valor de N");
	scanf("%f",&N);
	Resultado=(X*N)*(X*N);
	printf("O resultado da expressão aritmética é: %.1f",Resultado);
	return 0;
}
