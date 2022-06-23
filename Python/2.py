

print("Esse programa converte reais em uma determinada moeda")
op = int(input("\n\n1-Dolar \n\n2-Libra \n\n3-Iene \n\n4-Euro\n\n Escolha a moeda: "))
real = float(input("\n\nQuantos Reais deseja converter: "))

if (op == 1):
    convertido = real/3.90
    print(f"{real} Reais convertidos em Dolares é {convertido} Dolares\n\n")
elif(op == 2):
    convertido = real/3.90
    print(f"{real} Reais convertidos em Libras é {convertido} Libras\n\n",)
elif(op == 3):
    convertido = real/5.10
    print(f"{real} Reais convertidos em Ienes é {convertido} Ienes\n\n",)
elif(op == 4):
    convertido = real/4.40
    print(f"{real} Reais convertidos em Euros é {convertido} Euros\n\n",)
else:
    print("Opção invalida!")

    printf("\n\nObrigado por usar nosso sistema!\n\n");


