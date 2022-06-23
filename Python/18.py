printf=print
vogal=0
printf ("\n\nEste programa lê uma palavra e determina a quantidade de vogais!")
n = int(input("\n\nDigite a qunatidade de letras: "))

for i in range(1,n+1):
    letra = str(input(f"\n\nDigite a {i}ª letra: "))
    if (letra == 'a' or letra == 'A' or letra == 'e' or letra == 'E' or letra == 'i' or letra == 'I' or letra == 'o' or letra == 'O' or letra == 'u' or letra == 'U'):
       vogal=vogal+1

printf(f"A Palavra sua tem {vogal} vogais!")
printf("\n\nObrigado por utilizar nosso sistema!\n\n")
