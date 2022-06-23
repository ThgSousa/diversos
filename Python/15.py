faturamento = 0
fatItem=0
printf = print
i=1


printf ("\n\nEste programa determina o faturamento de uma empresa!")
n = int(input("\n\nDigite a quantidade de produtos: "))

for i in range(1,n+1):
    preco = float(input(f"\n\nDigite o preço do produto {i}: "))
    fatItem=n*preco
    faturamento=faturamento+fatItem
    i=i+1

printf (f"\n\nO faturamento da empresa é de R${faturamento}!")

printf ("\n\nObrigado por utilizar nosso sistema!\n\n")
