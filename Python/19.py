printf = print
printf("\n\nEste programa lê as caracteristicas de três elementos químicos e os determina!")

massaPrimeiro = int(input("\n\nDigite a massa do do primeiro elemento: "))

massaSegundo = int(input("\n\nDigite a massa do do segundo elemento: "))

massaTerceiro = int(input("\n\nDigite a massa do do terceiro elemento: "))

protonUm = int(input("\n\nDigite a quantidade de prótons do primeiro elemento: "))

protonDois = int(input("\n\nDigite a quantidade de prótons do segundo elemento: "))

protonTres = int(input("\n\nDigite a quantidade de prótons do terceiro elemento: "))

neutronUm = int(input("\n\nDigite a quantidade de nêutron do terceiro elemento: "))

neutronDois = int(input("\n\nDigite a quantidade de nêutron do terceiro elemento: "))

neutronTres = int(input("\n\nDigite a quantidade de nêutron do terceiro elemento: "))

if (massaPrimeiro == massaSegundo):
    printf("Os elementos 1 e 2 são isobaros!")

if (massaPrimeiro == massaTerceiro):
    printf("Os elementos 1 e 3 são isobaros!")

if (massaSegundo == massaTerceiro):
    printf("Os elementos 2 e 3 são isobaros!")

if (protonUm == neutronDois):
    printf("Os elementos 1 e 2 são isotonos!")

if (protonUm == neutronTres):
    printf("Os elementos 1 e 3 são isotonos!")

if (neutronDois == neutronTres):
    printf("Os elementos 2 e 3 são isotonos!")

if (massaPrimeiro == protonDois):
    printf("Os elementos 1 e 2 são isotonos!")

if (massaPrimeiro == protonTres):
    printf("Os elementos 1 e 3 são isotonos!")

if (protonDois == protonTres):
    printf("Os elementos 2 e 3 são isotonos!")

printf("\n\nObrigado por utilizar nosso sistema!\n\n")
