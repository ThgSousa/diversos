imc=0
print("Esse programa determina IMC com base na altura e peso!\n\n")

a = float(input("\n\nAltura: "))
b = float(input("\n\nPeso: "))
imc=b/(a*a)

if(imc<16):
	print("Magreza Grave!")

if(imc<=17 and imc>=16):
	print("Magreza Moderada!")

if(imc<=18.5 and imc>=17):
	print("Magreza Leve!")

if(imc<=25 and imc>=18.5):
	print("Saudavel!")

if(imc<=30 and imc>=25):
	print("Sobrepeso!")

if(imc<=35 and imc>=30):
	print("Obesidade Grau 1!")

if(imc<=40 and imc>=35):
	print("Obesidade Grau 2(Severa)!")

if(imc>40):
	print("Obesidade Grau 3(Mórbida)!")

print("\n\nObrigado por usar nosso sistema!\n\n")
