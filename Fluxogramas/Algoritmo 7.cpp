#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, kelvin;
	printf("\nDigite a temperatura em Celsius:");
	scanf("%f",&celsius);
	kelvin=celsius+273,15;
	printf("\nO valor em kelvin é: %2.2f", kelvin);
	printf("\nTecle ENTER ou ESC para sair do DOS");
	return 0;
}
