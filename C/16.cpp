#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main (void) {
	system ("cls");
	setlocale (LC_ALL, "Portuguese");
	float aprovados, n, i,nota;
	aprovados = 0;
	printf ("\n\nEste programa determina o número de alunos que tiraram nota acima da nota média da turma em um bimestre.!");
	printf ("\n\nDigite a quantidade de alunos: ");
	scanf ("%f", &n);
	i=1;
	do{
		printf ("\n\nDigite a nota do aluno %.0f: ",i);
		scanf ("%f", &nota);
		if(nota>=7){
			aprovados++;
		}
		i++;
	}while(i<=n);
	printf ("\n\n%.0f Aluno(s) aprovado(s)!",aprovados);

	printf ("\n\nObrigado por utilizar nosso sistema!\n\n");
	system ("Pause");
	return 0;
}

