resultado = 0
print ("\n\n\t\tEste programa realiza operações matemáticas básicas!")
print ("\n\n\n\t\tMENU")
print ("\n\n1 - Adição")
print ("\n\n2 - Subtração")
print ("\n\n3 - Multiplicação")
print ("\n\n4 - Divisão")
print ("\n\n5 - Potenciação")
print ("\n\n0 ou outro valor - Sair")
op = int(input ("\n\nDigite a opção desejada: "))


if(op ==1):
    print ("\n\nADIÇÃO")
    x = float(input("\n\nDigite o primeiro número: "))
    y = float(input("\n\nDigite o segundo número: "))
    resultado = x + y
    print (f"\n\n{x} + {y} = {resultado}")

elif (op ==2):
    printf ("\n\nSUBTRAÇÃO")
    x = float(input("\n\nDigite o primeiro número: "))
    y = float(input("\n\nDigite o segundo número: "))
    resultado = x - y
    print (f"\n\n{x} - {y} = {resultado}")
elif (op ==3):
    print ("\n\nMULTIPLICAÇÃO")
    x = float(input("\n\nDigite o primeiro número: "))
    y = float(input("\n\nDigite o segundo número: "))
    resultado = x * y
    print (f"\n\n{x} * {y} = {resultado}")
elif (op ==4):
    print ("\n\nDIVISÃO")
    x = float(input("\n\nDigite o primeiro número: "))
    y = float(input("\n\nDigite o segundo número: "))
    resultado = x / y
    print (f"\n\n{x} / {y} = {resultado}")
elif (op == 5):
    print ("\n\nPOTENCIAÇÃO")
    x = float(input("\n\nDigite o valor da base:"))
    y = float(input("\n\nDigite o valor do expoente: "))
    i=1
    resultado=1
    while(i<=y):
        resultado = x*resultado
        i=i+1
    print (f"\n\n{x} com expoente {y} = {resultado}")
else:
    print ("\n\nVocê optou em finalizar o programa!")

print ("\n\nObrigado por utilizar nosso programa!\n\n")


