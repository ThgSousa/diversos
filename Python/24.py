printf=print
printf ("\n\nEste programa analisa um proposição composta!")
printf ("\n\nPara o valor lógico de cada proposição simples digite: ")
printf ("\n\n1 - Verdadeiro\n\n0 - Falso")
p = int(input("\n\nDigite o valor lógico de p: "))

q = int(input("\n\nDigite o valor lógico de q: "))

r =int(input("\n\nDigite o valor lógico de r: "))

if (((p == 1) or (p == 0)) and ((q == 1) or (q == 0)) and ((r == 1) or (r == 0))):
    if (p == 1 and q == 1 and r == 1 and s == 1) :
        printf ("\n\nA proposição P é verdadeira!")
    else:
        printf ("\n\nA proposição P é falsa!")
else:
    printf ("\n\nDigite valores lógicos válidos!")

printf ("\n\nObrigado por utilizar nosso programa!\n\n")
