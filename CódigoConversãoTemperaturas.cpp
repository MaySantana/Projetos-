#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Convers�o de Temperaturas

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float C, F;
	printf("Escreva a temperatura em Celsius");
	scanf("%f", &C);
	
	//Celsius para Fahrenheit
	F = 1.8 * C + 32;
	
	printf("A temperatura em Fahrenheit �: %.2f", F);
	
	printf("\nEscreva a temperatura em Fahrenheit");
	scanf("%f", &F);
	
	//Fahrenheit para Celsius
	C = (F-32)/1.8;
	
	printf("A temperatura em Celsius �: %.2f", C);
}
