printf = print
printf("Esse programa determina o valor da fatura do cliente com chamadas internacionais!\n\n")

temp = float(input("\n\nDigite o tempo da ligação: "))
if (temp >= 1666.66):
    desc = ((temp * 0.30) * 5) / 100
    printf(f"O valor da fatura é de R$ {desc}!")
else:
    desc = (temp * 0.30)
    printf(f"O valor da fatura é de R$ {desc}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
