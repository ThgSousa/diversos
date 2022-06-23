novoTermo = 0
printf = print
printf("\n\nEste programa imprime a Série de Fibonacci até um termo n!")
n = int(input("\n\nDigite a quantidade de termos para impressão: "))

if (n <= 0):
    printf("\n\nNão é possível imprimir nenhum termo da Série de Fibonacci")

elif (n == 1):
    printf("\n\nSérie de Fibonacci: 1, ")

elif (n == 2):
    printf("\n\nSérie de Fibonacci: 1, 1, ")

elif (n > 2):
    termo1 = 1
    termo2 = 1
    printf(f"\n\nSérie de Fibonacci: \n{termo1}, \n{termo2}, ")
    for i in range(1, n + 1):
        novoTermo = termo1 + termo2
        printf(f"{novoTermo}, ")
        termo1 = termo2
        termo2 = novoTermo
        i = i + 1

printf("...")
printf("\n\nObrigado por utilizar nosso sistema!\n\n")
