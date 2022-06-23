printf = print
printf("Esse programa determina o salario com base no reajuste e no FGTS!")

salario = float(input("\n\nSalario bruto: "))

if(salario<=2000):
    salario = (salario*15)/100
    printf(f"Seu Salario liquido é de R${salario}!")

elif(salario>2000 and salario<3000):
    salario = (salario*10)/100
    printf(f"Seu Salario liquido é de R${salario}!")

elif(salario>3000):
    salario=(salario*8)/100
    printf(f"Seu Salario liquido é de R${salario}!")

    printf("\n\nObrigado por usar nosso sistema!\n\n");
