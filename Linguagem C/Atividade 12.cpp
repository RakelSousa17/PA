#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float h, m, s;
	printf("Entre com os segundos:");
	scanf("%f",&s);
	m=s/60;
	h=m/60;
	printf ("Os segundos correpondem aos seguintes minutos: %f", m);
	printf("\nOs segundos correpondem ás seguintes horas: %f", h);
	return 0;
}
