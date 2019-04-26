#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, area;
	printf("Digite o valor do raio:");
	scanf("%f",&r);
	area=3,14*(r*r);
	printf("O valor da área é: %f", area);
	return 0;
}
