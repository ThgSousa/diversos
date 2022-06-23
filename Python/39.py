import os
aresta=0
aresta1=0
aresta2=0
vol=0
volexist=0
print("\n\nEste algoritmo calcula o combustivel existente em um reservatorio,que esta a 60% de sua capacidade.")
aresta=float(input("\n\nDigite o valor da aresta desse reservatorio: "))
aresta1=float(input("\n\nDigite o valor da aresta desse reservatorio: "))
aresta2=float(input("\n\nDigite o valor da aresta desse reservatorio: "))
vol=(aresta*aresta1)*aresta2
volexist=(60*vol)/100
print(f"\n\nEste é o valor do combustivel existente nesse reservatorio : {volexist}")
print("\n\nObrigado por utilizar nosso programa")







os.system("pause")
