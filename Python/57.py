printf=print
printf("Esse programa determina a distância entre os pontos(x e y) e (w e z)!\n\n")

x = float(input("\n\nDigite as coordenadas do eixo x: "))
y = float(input("\n\nDigite as coordenadas do eixo y: "))
w = float(input("\n\nDigite as coordenadas do eixo w: "))
z = float(input("\n\nDigite as coordenadas do eixo z: "))
result=((w-x)*(w-x)-((z-y)*(z-y)))
printf (f"\n\nA distancia entre os dois pontos é de {result}!")
printf("\n\nObrigado por usar nosso sistema!\n\n")
