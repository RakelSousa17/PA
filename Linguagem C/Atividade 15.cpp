#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, raio, volume;
	printf("\nInforme a altura da lata:");
	scanf("%f",&altura);
	printf("Informe o raio da circunferência da lata:");
	scanf("%f",&raio);
	volume=3.14*(raio*raio)*altura;
	printf("O volume da lata é: %f", volume);
	return 0;
}
