#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int semana;
	printf("Digite um n�mero para um dia da semana:");
	scanf("%i", &semana);
	switch (semana) {
		case 1:
	printf("Domingo: final de semana");
	 break;
	    case 2:
	printf("Segunda feira: dia �til");
	 break;
	    case 3:
	printf("Ter�a-feira: dia �til");
	 break;
	    case 4:
	printf("Quarta-feira: dia �til");
	 break;
	    case 5:
	printf("Quinta-feira: dia �til");
	 break;
	    case 6:
    printf("Sexta-feira: dia �til");
     break;
        case 7:
    printf("S�bado: fim de semana");
     break;
	}
}
