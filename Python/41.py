printf = print
printf("Esse programa lê a razão e o primeiro termo de uma P.G e mostra os N termos seguintes!\n\n")
pm = float(input("Digite o primeiro termo: "))
razao = float(input("Digite a razão: "))
soma=0
i = 1
for i in range(1, 100 + 1):
    pm = pm * razao
    soma = soma + pm
    printf(f"{pm},")

printf(f"\n\nA soma da p.a é {soma}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
