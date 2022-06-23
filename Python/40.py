import os
n1=0
n2=0
n3=0
somapara=0
somacu=0
somacili=0
somatudo=0
volpara= 0
volcu=0
volcili=0
i=1
aresta=0
a=0
b=0
c=0
raio=0
altc=0
print("\n\nEsse algoritmo calcula o volume total de armazenamento reservatorio.Com n tanques de formatos diferentes !")
n1=int(input("\n\nDigite o numero e tanques de formato cubico: "))
for i in range(1,n1+1):
    i=i+1
    aresta=float(input("\n\nDigite o valor da aresta : "))
    volcu = (aresta*aresta)*aresta
    somacu = somacu +volcu
n2=int(input("\n\nDigite o numero e tanques de formato de paralelepipedo: "))
for i in range (1,n2+1):
    i=i+1
    a=float(input("\n\nDigite a altura: "))
    b=float(input("\n\nDigite o comprimento: "))
    c=float(input("\n\nDigite a largura: "))
    volpara= (a*b)*c
    somapara = somapara +volpara
n3=int(input("\n\nDigite o numero e tanques de formato de cilindro: "))
for i in range (1,n3+1):
    i=i+1
    alt=float(input("\n\nDigite a altura: "))
    raio=float(input("\n\nDigite o raio: "))
    volcili= (alt*3.14)*raio**2
    somacili = somacili +volcili
somatudo= (somacu + somapara)+somacili
print(f"\n\nEsse é o valor total do reservatorio : {somatudo}")
print("\n\nObrigado por ultilizar  nosso programa")

    
    
    
    
    
    


os.system("pause")
