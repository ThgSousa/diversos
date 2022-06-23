import os
l=0
l1=0
l2=0
print("\n\nEste programa determine se uma palavra formada de tres letra forma um palindrome")
l=str(input("\n\nDigite a 1° letra dessa palavra : "))
l1=str(input("\n\nDigite a 2° letra dessa palavra : "))
l2=str(input("\n\nDigite a 3° letra dessa palavra : "))
if(l==l2):
    print("\n\nEsta palavra é um palindrome.")
else:
    print("\n\nEsta palavra não é um palindrome.")
print("\n\nObrigado por ultiliizar nosso programa.")
       

os.system("pause")
