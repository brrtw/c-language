#include<stdio.h>
#include<locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float a, p, imc;
	printf("Informe seu peso: ");
	scanf("%f", &p);
	printf("Informe sua altura: ");
	scanf("%f", &a);
	imc = p / (a * a);
	printf("Seu IMC �: %.2f", imc);
	return(0);
}