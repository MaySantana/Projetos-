#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//C�lculo da m�dia

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
	
	//C�lculo da m�dia
	media = (n1+n2+n3)/3;
	
	printf("\nSua m�dia �: %f", media);
	
}
