#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//C�lculo de desconto

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float compra;
	char nome;
	int bonus;
	
	printf("Parab�ns!Voc� ganhou um bonus de 10% na sua �ltima compra, siga as instru��es para resgat�-lo!");
	printf("\nDigite seu nome");
	scanf("%s", &nome);
	printf("\nDigite o valor da sua compra");
	scanf("%f", &compra);
	
	//Desconto
	bonus = compra - (compra*0.1);
	
	printf("\nParab�ns!Seu produto agora custa: %.2i", bonus);
	
}
