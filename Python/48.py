printf = print
tt=1
printf("Esse programa determina o produtório dos números inteiros no intervalo de 1 até n!\n\n")

n = int(input("\n\nDigite ate onde deseja fazer o produtório: "))
i = 1
for i in range(1,n):
    tt = tt * i
    i=i+1
printf(f"\n\nO produtório é de {tt}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
