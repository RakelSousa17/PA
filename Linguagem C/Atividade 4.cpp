#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	float N1, N2, N3, N4, Media;
	char nome[50];
	printf("\nDigite o nome do aluno\n\n");
	scanf("%s",&nome);
	printf("Digite o primeiro n�mero:");
	scanf("%f",&N1);
	printf("Digite o segundo n�mero");
	scanf("%f",&N2);
	printf("Digite o terceiro n�mero:");
	scanf("%f",&N3);
	printf("Digite o quarto n�mero:");
	scanf("%f",&N4);
	Media=(N1+N2+N3+N4)/4;
	printf("O aluno %s alcan�ou � m�dia %.1f",nome,Media);
	return 0;
}
