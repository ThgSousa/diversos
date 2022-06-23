cpf1 = 12345678911
dat1 = 27022001
pass1 = 1234
printf = print
printf("Esse programa compara um cpf, data de nascimento e senha digitados pelo usuários com os salvos no sistema e determina se são validos!")

cpf2 = int(input("\n\nDigite o seu CPF: (Somente números!)"))
dat2 = int(input("\n\nDigite sua data de nascimento: (Somente números!)"))
pass2 = int(input("\n\nDigite sua senha: (Somente números!)"))

if((cpf1==cpf2)and(dat1==dat2)and(pass1==pass2)):
	printf("\n\nBem Vindo, Credenciais Válidas!")
else:
	printf("\n\nVocê digitou algo errado!")

printf("\n\nObrigado por usar nosso sistema!\n\n")
