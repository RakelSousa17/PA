#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, quadrado;
	printf("Digite o n�mero:");
	scanf("%f",&a);
	quadrado=a*a;
	printf("O resultado do n�mero �: %f", quadrado);
	return 0;
}
