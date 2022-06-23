#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float i,n,rep,ap,media,nota;
	printf("Esse programa calcula a media de N alunos e determina quantos passaram e quantos reprovaram!\n\n");
	printf ("\n\nQuantidade de alunos: ");
	scanf ("%f", &n);

	i=1;
	while(i<=n){
		printf ("\n\nDigite a nota do aluno %.0f: ",i);
		scanf ("%f", &nota);
		if(nota>=7){
			ap++;
		}else{
			rep++;
		}
		media=media+nota;
		i++;
	}
	printf ("\n\n%.0f alunos APROVADOS!", ap);
	printf ("\n\n%.0f alunos REPROVADOS!", rep); 	
	printf ("\n\nA media da turma é %.2f!", media/n);
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

