#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, raio, volume;
	printf("\nInforme a altura da lata:");
	scanf("%f",&altura);
	printf("Informe o raio da circunfer�ncia da lata:");
	scanf("%f",&raio);
	volume=3.14*(raio*raio)*altura;
	printf("O volume da lata �: %f", volume);
	return 0;
}
