printf=print
printf("Esse programa realiza potenciações!\n\n")
x = float(input("\n\nDigite o valor da base: "))

y= float(input("\n\nDigite o valor do expoente: "))
i=1
resultado=1
while(i<=y):
	resultado = x*resultado
	i=i+1

printf (f"\n\n{x} com expoente {y} = {resultado}")

printf("\n\nObrigado por usar nosso sistema!\n\n");
