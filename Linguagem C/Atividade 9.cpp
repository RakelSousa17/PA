#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valorHora, dependentes, horasTrabalhadas, valorBruto, valorLiquido;
	printf("Digite o número de dependentes:");
	scanf("%f",&dependentes);
	printf("Digite o valor da hora:");
	scanf("%f",&valorHora);
	printf("Digite a quantidade de horas trabalhadas:");
	scanf("%f",&horasTrabalhadas);
	valorBruto=valorHora*horasTrabalhadas;
	valorLiquido=(300*dependentes)+valorBruto;
	printf("Valor Bruto: %.1f", valorBruto);
	printf("Valor Liquido: %.1f", valorLiquido);
	return 0;
}
