print("Esse programa classifica se os valores formam um triangulo e determina qual o tipo!\n\n");

a = float(input("\n\nValor de X: "))

b = float(input("\n\nValor de Y: "))

c = float(input("\n\nValor de Z: "))

if (a<=0 or b<=0 or c<=0):
	print("Lados nulos ou negativos nao sao aceitos.")

elif (a>=b+c or b>=c+a or c>=a+b):
	print("Triangulo inexistente.")

elif (a==b and b==c):
	print("Triangulo equilatero.")

elif (a==b or b==c or c==a):
	print("Triangulo isosceles.")

else:
	print("Triangulo escaleno.")


print("\n\nObrigado por usar nosso sistema!\n\n")
