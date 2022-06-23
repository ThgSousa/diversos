H = 0
div = 1
printf = print
printf ("\n\nEste programa determina o valor de H!")
n = int(input("\n\nDigite o valor de n: "))
if (n <= 0) :
    printf ("\n\nNão é possível determinar o valor de H!")
elif (n > 0):
    while (div <= n):
        H = H + (1/div)
        div = div + 1
    printf(f"\n\nO valor de H é {H}!")
printf ("\n\nObrigado por utilizar nosso sistema!\n\n")
