#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, M;
	printf("\nDigite o valor para a vari�vel A:");
	scanf("%f",&A);
	printf("\nDigite o valor para a vari�vel B:");
	scanf("%f",&B);
	printf("\nDigite o valor para a vari�vel M:");
	scanf("%f",&M);
	M=(A+B)/2;
	printf("A M�dia dos valores �: %f", M);
	return 0;
}
