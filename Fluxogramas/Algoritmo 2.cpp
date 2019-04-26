#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, soma;
	printf("Digite os valor de A:");
	scanf("%f",&a);
	printf("Digite os valor de B:");
	scanf("%f",&b);
	soma=a+b;
	printf("A soma de A + B é: %f", soma);
	return 0;
}
