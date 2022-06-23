maiorId = 0
menorId = 999
maiorPeso = 0
menorPeso = 999
maiorAlt = 0
menorAlt = 999
printf = print
mediaId=0
mediaAlt=0
mediaPeso=0
printf("Esse programa lê a idade, o peso e a altura de n pessoas, determina a media, o maio e o menor de cada um!\n\n")

n = int(input("\n\nQuantidade de pessoas: "))
i = 1
for i in range(1, n + 1):
    temp = 0
    temp = int(input(f"\n\nIdade da pessoa {i}: "))
    if (temp < menorId):
        menorId = temp

    if (temp > maiorId):
        maiorId = temp

    mediaId = mediaId + temp

    temp = 0
    temp = float(input(f"\n\nPeso da pessoa {i}: "))
    if (temp < menorPeso):
        menorPeso = temp

    if (temp > maiorPeso):
        maiorPeso = temp

    mediaPeso = mediaPeso + temp

    temp = 0
    temp = float(input(f"\n\nAltura da pessoa {i}: "))
    if (temp < menorAlt):
        menorAlt = temp

    if (temp > maiorAlt):
        maiorAlt = temp

    mediaAlt = mediaAlt + temp

mediaId = mediaId / n
mediaPeso = mediaPeso / n
mediaAlt = mediaAlt / n
printf(f"\nA menor altura entre {n} pessoa(s) é de {menorAlt}")
printf(f"\nA maior altura entre {n} pessoa(s) é de {maiorAlt}")
printf(f"\n\nAltura media de de {n} pessoa(s) é de {mediaAlt}")

printf(f"\nO menor peso entre {n} pessoa(s) é de {menorPeso}")
printf(f"\nO maior peso entre {n} pessoa(s) é de {maiorPeso}")
printf(f"\n\nA media de peso de {n} pessoa(s) é de {mediaPeso}")

printf(f"\nA menor idade entre {n} pessoa(s) é de {menorId}")
printf(f"\nA maior idade entre {n} pessoa(s) é de {maiorId}")
printf(f"\n\nA media de idade de {n} pessoa(s) é de {mediaId}")

printf("\n\nObrigado por usar nosso sistema!\n\n")
