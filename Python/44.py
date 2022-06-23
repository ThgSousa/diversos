import os
n1=0
n2=0
n3=0
n4=0
n5=0
somapara=0
somacu=0
somacili=0
somatudo=0
somapir=0
somacon=0
volpara= 0
volcu=0
volcili=0
volpir=0
volcon=0
i=1
aresta=0
a=0
b=0
c=0
raio=0
altc=0
raio1=0
alt1=0
alt2=0
raio2=0
print("\n\nEsse algoritmo calcula o volume total de armazenamento reservatorio.Com n tanques de formatos diferentes !")
n1=int(input("\n\nDigite o numero e tanques de formato cubico: "))
for i in range(1,n1+1):
    i=i+1
    aresta=float(input("Digite o valor da aresta : "))
    volcu = (aresta*aresta)*aresta
    somacu = somacu +volcu
    print(f"\n\nEsse e o volume  do(s) reservatorio(s) de formato cubico: {somacu}")
n2=int(input("\n\nDigite o numero e tanques de formato de paralelepipedo: "))
for i in range (1,n2+1):
    i=i+1
    a=float(input("\n\nDigite a altura: "))
    b=float(input("\n\nDigite o comprimento: "))
    c=float(input("\n\nDigite a largura: "))
    volpara= (a*b)*c
    somapara = somapara +volpara
    print(f"\n\nEsse e o volume  do(s) reservatorio(s) de formato paralelepipedo: {somapara}")
n3=int(input("\n\nDigite o numero e tanques de formato de cilindro: "))
for i in range (1,n3+1):
    i=i+1
    alt=float(input("\n\nDigite a altura: "))
    raio=float(input("\n\nDigite o raio: "))
    volcili= (alt*3.14)*raio**2
    somacili = somacili +volcili
    print(f"\n\nEsse e o volume  do(s) reservatorio(s) de formato cilindrico: {somacili}")
i=1
n4=int(input("\n\nDigite o numero de tanques no formato piramidal: "))
while(i<=n4):
    raio1=float(input("\n\nDigite o valor do raio : "))
    alt1=float(input("\n\nDigite o valor da altura : "))
    volpir=(raio1*alt1)/3
    somapir=somapir+volpir
    i=i+1
    print(f"\n\nEsse e o volume  do(s) reservatorio(s) de formato piramidal: {somapir}")
i=1
n5=int(input("\n\nDigite o numero de tanques no formato conico: "))
while(i<=n5):
    raio2=float(input("\n\nDigite o valor do raio : "))
    alt2=float(input("\n\nDigite o valor da altura : "))
    volcon=(raio2*alt2)*3.14
    somacon=somacon+volcon
    i=i+1
    print(f"\n\nEsse e o volume  do(s) reservatorio(s) de formato conico: {somacon}")  
somatudo= (somacu + somapara)+somacili+somapir+somacon
print(f"\n\nEsse é o valor total do reservatorio : {somatudo}")
    
print("\n\nObrigado por ultilizar  nosso programa")

    
    
    
    
    
    


os.system("pause")
