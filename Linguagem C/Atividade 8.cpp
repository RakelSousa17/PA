#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float nascimento, x;
	printf("Qual o ano de nascimento?");
	scanf("%f",&nascimento);
	x=2050-nascimento;
	printf("Em 2050 terá: %.1f",x, "anos %.1f");
	return 0;
}
