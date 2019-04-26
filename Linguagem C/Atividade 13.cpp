#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	float delta, x1, x2, A, B, C;
	printf("Digite o valor de A:");
	scanf("%f",&A);
	printf("Digite o valor de B:");
	scanf("%f",&B);
	printf("Digite o valor de C:");
	scanf("%",&C);
	delta = B*B - 4.*A*C;
	if (delta = 0);
	x1 = (-B + sqrt(delta))/(2.*A);
	x2 = (-B - sqrt(delta))/(2.*A);
	printf("\nA equacao dada é: %f", A,B,C);
	printf("\nAs raizes reais são: \n1ª Raiz = %f \n2ª Raiz= %f\n", x1, x2);
	return 0;
}
