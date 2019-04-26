#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, M;
	printf("\nDigite o valor para a variável A:");
	scanf("%f",&A);
	printf("\nDigite o valor para a variável B:");
	scanf("%f",&B);
	printf("\nDigite o valor para a variável M:");
	scanf("%f",&M);
	M=(A+B)/2;
	printf("A Média dos valores é: %f", M);
	return 0;
}
