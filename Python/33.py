novoTermo = 0
printf = print
posic = 0
printf("\n\nEste programa imprime a Série de Fibonacci até um termo n ou busca um termo da serie!")
printf("\n\nDigite 1 para imprimir a serie ate um termo N, ou 2 para buscar um termo na serie! ")
op = int(input("\n\nDigite a opção desejada: "))

if (op == 1):
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
        i = 2
        printf(f"\n\nSérie de Fibonacci:\n {termo1}, \n{termo2}, ")
        while (i < n):
            novoTermo = termo1 + termo2
            printf(f"{novoTermo}, ")
            termo1 = termo2
            termo2 = novoTermo
            i = i + 1

    printf("...")
elif (op == 2):
    num = int(input("\n\nDigite um termo para buscar na serie: "))
    if (num <= 0):
        printf("\n\nNão é possível imprimir nenhum termo da Série de Fibonacci")

    elif (num == 1):
        printf("\n\nPosição 1 ")

    elif (num == 2):
        printf("\n\nPosição 2 ")

    elif (num > 2):
        termo1 = 1
        termo2 = 1
        i = 3
        val=0
        printf(f"\n\nSérie de Fibonacci:\n{termo1}, \n{termo2}, ")
        while (val == 0):
            novoTermo = termo1 + termo2
            termo1 = termo2
            termo2 = novoTermo
            printf(f"\n{novoTermo},")
            if (i > num):
                val = 1
                posic=0
            elif (num == novoTermo):
                val = 1
                posic = i
            else:
                val=0
            i = i + 1
    if (posic != 0):
        printf(f"\n\nO termo digitado esta na posição {posic}!")
    else:
        printf("\n\nO termo digitado nao faz parte da serie!")

else:
    printf("\n\nOpção invalida!")

printf("\n\nObrigado por utilizar nosso sistema!\n\n")
