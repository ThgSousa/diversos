sal=0
op=0
printf=print
printf("Esse programa determina o salvario de um vandedor com base na comissâo!\n\n")

sal = float(input("\n\nSalario do vendedor: "))

n = int(input("\n\nVendas realizadas no mês: "))
i=1
for i in range(1,n+1):
    op = float(input(f"\n\nValor da venda {i}: "))
    if(op<1000):
        sal=sal+50
    elif((op>1000)and(op<=2000)):
        sal=sal+70
    elif(op>2000):
        sal=sal+110

    i=i+1

printf(f"\n\nO salario no final do mês será de R${sal}")
printf("\n\nObrigado por usar nosso sistema!\n\n")
