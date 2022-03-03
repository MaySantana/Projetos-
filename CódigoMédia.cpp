#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Cálculo da média

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	printf("Entre com a primeira nota");
	scanf("%f", &n1);
	printf("\nEntre com a segunda nota");
	scanf("%f", &n2);
	printf("\nEntre com a terceira nota");
	scanf("%f", &n3);
	
	//Cálculo da média
	media = (n1+n2+n3)/3;
	
	printf("\nSua média é: %f", media);
	
}
