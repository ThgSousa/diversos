printf=print
printf("Esse programa calcula a media de N alunos e determina quantos passaram e quantos reprovaram!\n\n")
n = int(input("\n\nQuantidade de alunos: "))
rep=0
ap=0
media=0
i=1
while(i<=n):
	nota = float(input(f"\n\nDigite a nota do aluno {i}: "))
	if(nota>=7):
		ap=ap+1
	else:
		rep=rep+1

	media=media+nota
	i=i+1

printf (f"\n\n{ap} alunos APROVADOS!")
printf (f"\n\n{rep} alunos REPROVADOS!")
media=media/n
printf (f"\n\nA media da turma é {media}!")
printf("\n\nObrigado por usar nosso sistema!\n\n")
