tamanho=0
printf=print
printf("Esse programa calcula a extensão da ponte, em metros!\n\n")
comp = float(input("\n\nComprimento do trem: "))

temp = float(input("\n\nTempo de travessia na ponte: "))

v=80/3.6
tamanho=(v*temp)-comp
printf (f"\n\nA ponte tem {tamanho} metros!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
