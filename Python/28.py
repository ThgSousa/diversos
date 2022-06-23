printf=print
printf("Esse programa calcula o volume de N tanques e deternina o volume total!\n\n");
n = int(input("Digite a quantidade de tanques: "))
i=1
total=0
for i in range(1,n+1):
    tipo = int(input("\n\nFormato do tanque %.0f:\n\n1-Cubo\n\n2-Cilindro\n\n3-Cone\n\n4-Paralelepipedo\n\nEscolha um tipo de tanque: "))

    if(tipo ==1):
        area = float(input("\n\nDigite a aresta do cubo: "))
        temp=(area*area)*area
        total=total+temp
        printf(f"\n\nO volume do seu cubo é: {temp}")

    elif(tipo==2):
        area = float(input("\n\nDigite a aresta do cilindro: "))
        alt = float(input("\n\nDigite a altura do cilindro: "))
        temp=(area*alt)
        total=total+temp
        printf(f"\n\nO volume do seu cilindro é: {temp}")

    elif(tipo==3):
        area= float(input("\n\nDigite a aresta do cone: "))
        alt = float(input("\n\nDigite a altura do cone: "))
        temp=(area*alt)
        total=total+temp
        printf(f"\n\nO volume do seu cone é: {temp}")

    elif(tipo==4):
        area = float(input("\n\nDigite o comprimento do Paralelepipedo: "))
        alt = float(input("\n\nDigite a altura do Paralelepipedo: "))
        base = float(input("\n\nDigite a largura do Paralelepipedo: "))
        temp=(base*alt)*area
        total=total+temp
        printf(f"\n\nO volume do seu cubo é: {temp}")
    else:
        printf("\n\nDigite um valor valido!");


printf (f"\n\nO volume total dos tanques é de {total}!");

printf("\n\nObrigado por usar nosso sistema!\n\n");
