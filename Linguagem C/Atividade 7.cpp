#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float X, Y, Ar;
	printf("\n¡rea do Ret‚ngulo\n\n");
	printf("Digite X");
	scanf("%f",&X);
	printf("Digite Y");
	scanf("%f",&Y);
	Ar=(X*Y)/2;
	printf("A ·rea do ret‚ngulo È: %.1f",Ar);
	return 0;
}
