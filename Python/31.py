one = 0
two = 0
printf = print
printf("Esse programa determina a média ponderada de 4 notas!\n\n")
i = 1
for i in range(1, 4 + 1):
    nota = float(input(f"\n\nDigite a NOTA {i}: "))
    peso = float(input(f"\n\nDigite o PESO {i}: "))
    one = (nota * peso) + one
    two = two + peso

one = one / two
printf(f"\n\na média ponderada é de {one}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
