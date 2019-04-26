#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float B, A, Ar;
	printf("\n¡rea do Ret‚ngulo\n\n");
	printf("Digite a base do tri‚ngulo");
	scanf("%f",&B);
	printf("Digite a altura do ret‚ngulo");
	scanf("%f",&A);
	Ar=(B*A);
	printf("A ·rea do ret‚ngulo È: %.1f",Ar);
	return 0;
}
