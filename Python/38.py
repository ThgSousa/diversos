import os
a=0
b=0
c=0
d=0
print("\n\nEste algoritmo analisa esrta proposição logica (((p v q) v  r) v s) e diz em que caso o  professor contara uma mentira completa")
a=str(input("\n\nDigite se a primeira proposição e uma verdade(v) ou uma mentira(f): "))
b=str(input("\n\nDigite se a segunda proposição e uma verdade(v) ou uma mentira(f): "))
c=str(input("\n\nDigite se a terceira proposição e uma verdade(v) ou uma mentira(f): "))
d=str(input("\n\nDigite se a quarta proposição e uma verdade(v) ou uma mentira(f): "))
if((a=="f")and(b=="f")and(c=="f")and(d=="f")):
   print("\n\nEsta proposição é uma completa mentira")
else:
   print("\n\nEsta proposição é uma verdade")


os.system("pause")
