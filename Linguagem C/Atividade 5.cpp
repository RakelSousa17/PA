#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	float X,N, Resultado;
	printf("\nQuadrado da multiplica��o de dois n�meros\n\n");
	printf("Digite o valor de X");
	scanf("%f",&X);
	printf("Digite o valor de N");
	scanf("%f",&N);
	Resultado=(X*N)*(X*N);
	printf("O resultado da express�o aritm�tica �: %.1f",Resultado);
	return 0;
}
