#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float x, y, resultado;
	int op,i;
	resultado = 0;
	printf ("\n\n\t\tEste programa realiza operações matemáticas básicas!");
	printf ("\n\n\n\t\tMENU");
	printf ("\n\n1 - Adição");
	printf ("\n\n2 - Subtração");
	printf ("\n\n3 - Multiplicação");
	printf ("\n\n4 - Divisão");
	printf ("\n\n5 - Potenciação");
	printf ("\n\n0 ou outro valor - Sair");
	printf ("\n\nDigite a opção desejada: ");
	scanf ("%d", &op);
	printf ("\n\nPressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	//Escolha-Caso = switch-case
	switch (op) {
		case 1:
			printf ("\n\nADIÇÃO");
			printf ("\n\nDigite o primeiro número: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo número: ");
			scanf ("%f", &y);
			resultado = x + y;
			printf ("\n\n%.2f + %.2f = %.2f", x, y, resultado);
			break; //Parada
		
		case 2:
			printf ("\n\nSUBTRAÇÃO");
			printf ("\n\nDigite o primeiro número: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo número: ");
			scanf ("%f", &y);
			resultado = x - y;
			printf ("\n\n%.2f - %.2f = %.2f", x, y, resultado);
			break;
		
		case 3:
			printf ("\n\nMULTIPLICAÇÃO");
			printf ("\n\nDigite o primeiro número: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo número: ");
			scanf ("%f", &y);
			resultado = x * y;
			printf ("\n\n%.2f * %.2f = %.2f", x, y, resultado);
			break;
		
		case 4:
			printf ("\n\nDIVISÃO");
			printf ("\n\nDigite o primeiro número: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo número: ");
			scanf ("%f", &y);
			if (y != 0) {
				resultado = x / y;
				printf ("\n\n%.2f / %.2f = %.2f", x, y, resultado);
			}
			else
				printf ("\n\nNão é possível realizar a divisão!");
			break;
		
		case 5:
			printf ("\n\nPOTENCIAÇÃO");
			printf ("\n\nDigite o valor da base: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o valor do expoente: ");
			scanf ("%f", &y);
			i=1;
			resultado=1;
			while(i<=y){
				resultado = x*resultado;
				i++;
			}
			printf ("\n\n%.0f com expoente %.0f = %.0f", x, y, resultado);
			break;
		
		default: //Padrão
			printf ("\n\nVocê optou em finalizar o programa!");
	}
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;	
}

