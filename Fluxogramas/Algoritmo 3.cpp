#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, quadrado;
	printf("Digite o número:");
	scanf("%f",&a);
	quadrado=a*a;
	printf("O resultado do número é: %f", quadrado);
	return 0;
}
