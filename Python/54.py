import os
x=0
y=0
print("\n\nEste algoritimo recebe dois valores(x,y) e informa seu quadrante no plano cartesiano.")
x=float(input("\n\nDigite o valor de x = "))
y=float(input("\n\nDigite o valor de y = "))
if((x>0)and(y>0)):
    print("\n\nEste dois valores estao no 1° quadrante")
elif((x<0)and(y>0)):
    print("\n\nEste dois valores estao no 2° quadrante")
elif((x<0)and(y<0)):
    print("\n\nEste dois valores estao no 3° quadrante")
elif((x>0)and(y<0)):
    print("\n\nEste dois valores estao no 4° quadrante")
print("\n\nObrigado por ultilizar nosso programa.")
    


os.system("pause")
