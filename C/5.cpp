#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float a,b,c;
	
	printf("Esse programa classifica se os valores formam um triangulo e determina qual o tipo!\n\n");
	
	printf("\n\nValor de X: ");
	scanf("%f",&a);
	
	printf("\n\nValor de Y: ");
	scanf("%f",&b);
	
	printf("\n\nValor de Z: ");
	scanf("%f",&c);
	
	if (a<=0 || b<=0 || c<=0){
	      printf("Lados nulos ou negativos nao sao aceitos."); 
	   }
	
	   if (a>=b+c || b>=c+a || c>=a+b) {
	      printf("Triangulo inexistente.");
	      
	   }
	
	   if (a==b && b==c)
	      printf("Triangulo equilatero.");
	
	   else if (a==b || b==c || c==a)
	      printf("Triangulo isosceles.");
	
	   else
	      printf("Triangulo escaleno.");
	
	
	printf("\n\nObrigado por usar nosso sistema!\n\n");
	system("pause");
	return 0;
}

