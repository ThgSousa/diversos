printf=print
printf("Esse programa determina se os valores digitados formam um triangulo ou um quadrado!\n\n")

l1 =float(input("\n\nDigite o primeiro lado: "))

l2 = float(input("\n\nDigite o segundo lado: "))

l3 = float(input("\n\nDigite o terceiro lado: "))

l4 = float(input("\n\nDigite o quarto lado: "))

if((l1==l2)and(l2==l3)and(l3==l4)):
	printf ("\n\nOs valores formam um quadrado!")
else:
	printf ("\n\nÉ um retangulo")


printf("\n\nObrigado por usar nosso sistema!\n\n")
