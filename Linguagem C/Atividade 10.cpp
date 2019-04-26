#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Depos_Inicial, Mes1, Mes2, Mes3;
	printf("\nControle sua Conta Poupança!\n");
	Depos_Inicial=500;
	Mes1=Depos_Inicial+(Depos_Inicial/100)*1;
	Mes2=Mes1+(Mes1/100)*1;
	Mes3=Mes2+(Mes2/100)*1;
	printf("Seu saldo após três mêses será: %.1f", Mes3, " $.");
	printf("\nDepósito inicial: %.1f\n", Depos_Inicial, " $.");
	return 0;
}
