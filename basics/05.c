#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int a,p,imc;
	printf("Informe sua altura: ");
	scanf("%d", &a);
	printf("Informe seu peso: ");
	scanf("%d", &p);
	imc= p / (a * a);
	printf("Seu IMC �: %.2f", imc);
	return(0);
}