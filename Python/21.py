printf = print
printf("Esse programa determina a soma entre N itens!\n\n")

n = int(input("\n\nQuantidade de itens: "))
i = 1
soma = 0
while (i <= n):
    item = float(input(f"\n\nPreço do item {i}: "))
    soma = soma + item
    i = i + 1

printf(f"\n\nA soma do(s) {n} itens é de {soma}")

printf("\n\nObrigado por usar nosso sistema!\n\n")
