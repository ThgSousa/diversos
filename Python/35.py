menorNum=999
maiorNum=0
printf=print
maior=0
media=0
printf("Esse programa  le N números e determine o maior número e o menor número!\n\n")

n = int(input("\n\nA Quantidade de numeros: : "))
i=1
for i in range(1,n+1):
	temp = int(input(f"\n\nValor do numero {i}: "))
	if(temp<menorNum):
		menorNum=temp

	if(temp>maiorNum):
		maiorNum=temp

	media=media+temp
	if(temp>media):
		maior=maior+1

media = media/n

printf("\n\n\t\tRESULTADOS")
printf(f"\n\n\tA media dos {n} numeros é de {media} ")
printf(f"\n\n\tO Maior Numero digitado foi de {maiorNum}! ")
printf(f"\n\n\tO Menor Numero digitado foi {menorNum}! ")


printf("\n\nObrigado por usar nosso sistema!\n\n")
