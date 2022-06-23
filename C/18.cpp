#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	char letra;
	int i,n,vogal; 
	printf ("\n\nEste programa lê uma palavra e determina a quantidade de vogais!");
 	printf ("\n\nDigite a qunatidade de letras: ");
	scanf ("%d", &n);
	for(i=1;i<=n;i++){
		printf ("\n\nDigite a %dª letra: ",i);
		scanf ("%c", &letra);
		if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
			vogal++;
		}
	}
	printf("A Palavra sua tem %d vogais!",vogal);
	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

