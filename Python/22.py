printf=print

printf("Esse programa determina a area de um quadrado e a area dos quadrados internos!\n\n")

altura = float(input("\n\nAltura do quadrado: "))

base = float(input("\n\nBase do quadrado: "))
area=altura*base
quad=area/4

printf(f"\n\nA area do quadrado é de {area}")
printf(f"\n\nA area interna de 4 quadrados internos é de {quad}")

printf("\n\nObrigado por usar nosso sistema!\n\n")
