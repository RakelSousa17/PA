#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float cent, metros, desc, mm;
	printf("Digite centimetros:");
	scanf("%f",&cent);
	metros=(cent/100);
	desc=(cent/10);
	mm=(cent*1000);
	printf("\nO valor de metros �: %.1f", metros/100);
	printf ("\nO valor de desc �: %.1f", desc/10);
	printf("\nO valor de mm �: %.1f", mm*1000);
	return 0;
}
