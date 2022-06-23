#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float preco, fatItem, faturamento, n, i;
	faturamento = 0;
	fatItem=0;
	printf ("\n\nEste programa determina o faturamento de uma empresa!");
	printf ("\n\nDigite a quantidade de produtos: ");
	scanf ("%f", &n);

	for(i=1;i<=n;i++){
		printf ("\n\nDigite o preço do produto %.0f: ",i);
		scanf ("%f", &preco);
		fatItem=n*preco;
		faturamento=faturamento+fatItem;
	}
	printf ("\n\nO faturamento da empresa é de R$%.2f!",faturamento);

	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

