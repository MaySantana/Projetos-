#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Convers�o de Temperaturas

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float C, K;
	printf("Escreva a temperatura em Celsius");
	scanf("%f", &C);
	
	//Celsius para Kelvin
	K = C + 273;
	
	printf("A temperatura em Kelvin �: %.2f", K);
	
	printf("\nEscreva a temperatura em Kelvin");
	scanf("%f", &K);
	
	//Kelvin para Celsius
	C = K - 273;
	
	printf("A temperatura em Celsius �: %.2f", C);
}
