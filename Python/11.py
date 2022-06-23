printf = print
printf("Esse programa recebe N números e determina a media!")
n = float(input("\n\nQuantidade de termos: "))
i=1
soma=0
while(i<=n):
    termo = float(input(f"\n\nDigite o termo {i}: "))
    soma=soma+termo
    i = i+1

soma=soma/n
printf(f"\n\nA media dos {n} termos é de {soma}")

printf("\n\nObrigado por usar nosso sistema!\n\n")
