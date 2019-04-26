#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc;
	printf("\nDigite o seu peso:");
	scanf("%f",&peso);
	printf("\nDigite a sua altura:");
	scanf("%f",&altura);
	imc=peso/(altura*altura);
	printf("Seu imc é igual a: %2.2f", imc);
	printf("\nTecle enter para sair do DOS");
	return 0;
}
