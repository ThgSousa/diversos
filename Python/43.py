printf=print
printf("Esse programa determina a altura de um predio usando o angulo de sua sombra!\n\n");
printf("\n\nMenu\n1- 30°\n2- 45°\n3- 60°");
op = int(input("\n\nEscolha o angulo da sombra: "))
comp = float(input("Digite o comprimento da sombra: "))
if(op==1):
	comp = float(input("Digite o comprimento da sombra: "))
	comp=comp*0.57

elif(op==2):
	comp = float(input("Digite o comprimento da sombra: "))
	comp=comp*1

elif(op==3):
	comp = float(input("Digite o comprimento da sombra: "))
	comp=comp*1.73
else:
	printf("Opção invalida!")


printf (f"\n\nA altura do predio é {comp}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
