maior=0
menor=999
printf = print
printf("Esse programa recebe N números inteiros e determina o maior e menor!")
n = int(input("\n\nQuantidade de termos: "))
i=1
termo=0
while(i<=n):
    termo = float(input(f"\n\nDigite o termo {i}: "))
    if(termo>maior):
        maior=termo

    if(termo<menor):
        menor=termo

    i=i+1


printf(f"\n\nO menor termo digitado foi {menor} e o maior foi o {maior}!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
