v=0
printf=print
printf("Esse programa determina velocidade do automóvel!\n\n")

d = float(input("\n\nDigite o diametro do pneu: "))

epm = float(input("Digite a frequencia de EPM do veiculo: "))

v= (2*3.14)*(epm/60)*(d/2)

printf (f"\n\nA velocidade do automóvel é de {v}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
