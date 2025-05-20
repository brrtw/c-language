#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float v, c, l, a;
	printf("Informe o valor do comprimento da caixa: ");
	scanf("%f", &c);
	printf("Informe o valor da largura da caixa: ");
	scanf("%f", &l);
	printf("Infrome a altura da caixa: ");
	scanf("%f", &a);
	v = c*l*a;
	printf("O volume da caixa �: %.2f", v);
	return(0);
}