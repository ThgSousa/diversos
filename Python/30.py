menorId=999
maiorId=0
printf=print
printf("Esse programa le a idade de n pessoas. determina a média de idade, a idade  máxima,\n  a  idade  mínima,  a  quantidade  de  pessoas  maiores  de  idade  e  a  quantidade  de  pessoas  menores  de idade!\n\n")


n = int(input("\n\nA Quantidade de Pessoas: : "))
for i in range(1,n):
    idade = int(input(f"\n\nA idade do individuo {i}: "))

    if(idade>=18):
        maior=maior+1
    elif(idade<18):
        menor=menor=1
    if(idade<menorId):
        menorId=idade
    elif(idade>maiorId):
        maiorId=idade

    media=media+idade

media = media/n
printf("\n\n\t\tRESULTADOS");
printf(f"\n\n\tA idade media dos {n} individuos é de {media}")
printf(f"\n\n\tA Maior idade foi de {maiorId}! ")
printf(f"\n\n\tA Menor idade foi de {menorId}! ")
printf(f"\n\n\tExistem {menor} individuo(s) menor(es) de idade! ")
printf(f"\n\n\tExistem {maior} individuo(s) maior(es) de idade! ")

printf("\n\nObrigado por usar nosso sistema!\n\n")
