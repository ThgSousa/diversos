aprovados = 0
printf = print
printf("\n\nEste programa determina o número de alunos que tiraram nota acima da nota média da turma em um bimestre.!")
n = float(input("\n\nDigite a quantidade de alunos: "))
i = 1
while (i <= n):
    nota = float(input(f"\n\nDigite a nota do aluno {i}: "))
    if (nota >= 7):
        aprovados = aprovados + 1
    i = i + 1
printf(f"\n\n{aprovados} Aluno(s) aprovado(s)!")

printf("\n\nObrigado por utilizar nosso sistema!\n\n")
