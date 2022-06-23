qtPalavras=0
printf=print
print("Esse programa calcula a quantidade de palavras que podem ser formadas com N letras diferentes")
n = int(input("Digite a quantidade de letras:"))
i=1
result=1
while(i<=n):
    result=result*i
    i=i+1

print(f"Podem ser formadas {result} palavras diferentes com {n} letras!")
print("\n\nObrigado por usar nosso sistema!")
