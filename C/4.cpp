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
	printf ("\n\n\t\tEste programa realiza opera��es matem�ticas b�sicas!");
	printf ("\n\n\n\t\tMENU");
	printf ("\n\n1 - Adi��o");
	printf ("\n\n2 - Subtra��o");
	printf ("\n\n3 - Multiplica��o");
	printf ("\n\n4 - Divis�o");
	printf ("\n\n5 - Potencia��o");
	printf ("\n\n0 ou outro valor - Sair");
	printf ("\n\nDigite a op��o desejada: ");
	scanf ("%d", &op);
	printf ("\n\nPressione qualquer tecla para continuar...");
	getch();
	system ("cls");
	//Escolha-Caso = switch-case
	switch (op) {
		case 1:
			printf ("\n\nADI��O");
			printf ("\n\nDigite o primeiro n�mero: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo n�mero: ");
			scanf ("%f", &y);
			resultado = x + y;
			printf ("\n\n%.2f + %.2f = %.2f", x, y, resultado);
			break; //Parada
		
		case 2:
			printf ("\n\nSUBTRA��O");
			printf ("\n\nDigite o primeiro n�mero: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo n�mero: ");
			scanf ("%f", &y);
			resultado = x - y;
			printf ("\n\n%.2f - %.2f = %.2f", x, y, resultado);
			break;
		
		case 3:
			printf ("\n\nMULTIPLICA��O");
			printf ("\n\nDigite o primeiro n�mero: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo n�mero: ");
			scanf ("%f", &y);
			resultado = x * y;
			printf ("\n\n%.2f * %.2f = %.2f", x, y, resultado);
			break;
		
		case 4:
			printf ("\n\nDIVIS�O");
			printf ("\n\nDigite o primeiro n�mero: ");
			scanf ("%f", &x);
			printf ("\n\nDigite o segundo n�mero: ");
			scanf ("%f", &y);
			if (y != 0) {
				resultado = x / y;
				printf ("\n\n%.2f / %.2f = %.2f", x, y, resultado);
			}
			else
				printf ("\n\nN�o � poss�vel realizar a divis�o!");
			break;
		
		case 5:
			printf ("\n\nPOTENCIA��O");
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
		
		default: //Padr�o
			printf ("\n\nVoc� optou em finalizar o programa!");
	}
	printf ("\n\nObrigado por utilizar nosso programa!\n\n");
	system ("Pause");
	return 0;	
}

