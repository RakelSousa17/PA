#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, perimetro;
	printf("Digite o valor do lado:");
	scanf("%f",&a);
	perimetro=4*a;
	printf("O valor do perimetro é: %f", perimetro);
	return 0;
}
