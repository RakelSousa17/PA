#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	system("COLOR D7");
	int N1, N2, Res;
	printf("\nCálculo para soma de dois números\n\n");
	printf("Digite o primeiro número:");
	scanf("%d",&N1);
	printf("Digite o segundo número");
	scanf("%d",&N2);
	Res=N1+N2;
	printf("O resultado da soma é: %d", Res);
	return 0;
}
