h = 0
printf = print
printf("Esse programa determina o número H!\n\n")
n = int(input("\n\nDigite a quantidade de termos para impressão: "))

i = 1
for i in range(1, n + 1):
    h = h + (1 / (i * i))
    i=i+1

printf(f"\n\nO valor de H é de {h}!")
printf("\n\nObrigado por usar nosso sistema!\n\n")
