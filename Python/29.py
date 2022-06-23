printf = print
printf("Esse programa lê a razão e o primeiro termo de uma P.A e mostra os 100 termos seguintes e da a soma total!\n\n")
pm = float(input("Digite o primeiro termo: "))

razao = float(input("Digite a razão: "))
soma=0
for i in range(100 + 1):
    pm = pm + razao
    soma = soma + pm
    printf(f"{pm},")

printf(f"\n\nA soma da p.a é {soma}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
