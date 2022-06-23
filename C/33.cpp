#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	int termo1, termo2, novoTermo, n, i,op,num,val,falha,posic;
	novoTermo = 0;
	printf ("\n\nEste programa imprime a S�rie de Fibonacci at� um termo n ou busca um termo da serie!");
	printf ("\n\nDigite 1 para imprimir a serie ate um termo N, ou 2 para buscar um termo na serie! ");
	printf ("\n\nDigite a op��o desejada: ");
	scanf ("%d", &op);
	switch(op){
		case 1:
			printf ("\n\nDigite a quantidade de termos para impress�o: ");
			scanf ("%d", &n);
			if (n <= 0) {
				printf ("\n\nN�o � poss�vel imprimir nenhum termo da S�rie de Fibonacci");
			}
			else if (n == 1) {
				printf ("\n\nS�rie de Fibonacci: 1, ");
			}
			else if (n == 2) {
				printf ("\n\nS�rie de Fibonacci: 1, 1, ");
			}
			else if (n > 2) {
				termo1 = 1;
				termo2 = 1;
				i = 2;
				printf ("\n\nS�rie de Fibonacci: %d, %d, ", termo1, termo2);
				do {
					novoTermo = termo1 + termo2;
					printf ("%d, ", novoTermo);
					termo1 = termo2;
					termo2 = novoTermo;
					i = i + 1;
				} while (i < n);
			}	
			printf ("...");
			break;
		case 2:
		    printf("\n\nDigite um termo para buscar na serie: ");
		    scanf ("%d", &num);
		    termo1 = 1;
			termo2 = 1;
			novoTermo=0;
			val=1;

		    if (num <= 0){
		        printf("\n\nN�o � poss�vel imprimir nenhum termo da S�rie de Fibonacci");
		    }

		    else if (num == 1){
		        printf("\n\nPosi��o 1 ");
		    }

		    else if (num == 2){
		        printf("\n\nPosi��o 2 ");
		    }

		    else if (num > 2){
		        termo1 = 1;
		        termo2 = 1;
		        i = 3;
		        val=0;
		        printf("\n\nS�rie de Fibonacci:\n%d, \n%d, ",,termo1,termo2);
		        while (val == 0){
		            novoTermo = termo1 + termo2;
		            termo1 = termo2;
		            termo2 = novoTermo;
		            printf("\n%d,",novoTermo);
		            if (i > num){
		                val = 1;
		                posic=0;
		            }
		            else if (num == novoTermo){
		                val = 1;
		                posic = i;
		            }
		            else{
		                val=0;
		            }
		            i = i + 1;
		        }
		    if (posic != 0){
		        printf("\n\nO termo digitado esta na posi��o %d!",posic);
		    }
		    else{
		        printf("\n\nO termo digitado nao faz parte da serie!");
		    }

		}

			break;
		default:
			printf ("\n\nOp��o invalida!");
	}	
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
	}

