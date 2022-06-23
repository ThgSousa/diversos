print("Esse programa noma as 4 notas de um aluno e calcula a media")
i=1
soma=0
while(i<=4):
	nota = float(input(f"\n\nDigite a nota {i}: "))
	soma = soma +nota
	i = i+1

soma = soma/4

print(f"\n\nA media do aluno foi de {soma}!\n\n")

print("\n\nObrigado por usar nosso sistema!\n\n")
