import os

print("\n\nEste programa calcula a soma de n numeros")
n = int(input("\n\nDigite o numero de termos a serem somados: "))
i=1
somanum=0
media=0
while(i<=n):
    num = int(input("\n\nDigite o termo a ser somado: "))
    somanum = num + somanum
    i=i+1
print(f"\n\nO resultado da soma é: {somanum}")
if(somanum % 2==0 ):
    print("\n\nA soma total é um numero par")
else:
    print("\n\nA soma total é um numero impar")
media=somanum/n
if(media % 2 ==0):
    print("\n\nA media é um numero par")
else:
    print("\n\nA media é um numero impar")
print("\n\nObrigado por ultilizar nosso programa")
        


os.system("Pause")
