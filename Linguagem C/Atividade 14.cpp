#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(void){  
	setlocale(LC_ALL, "Portuguese");
	float volume, pi=3.14, raio;
	printf("Digite o valor do raio:");
	scanf("%f",&raio);
	volume = (4/raio)/(3.14*raio);
	printf("O volume é: %f\n", raio);
	return 0;
}
