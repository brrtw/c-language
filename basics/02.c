#include<stdio.h>
#include<locale.h>
#define PI 3.14
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float r, a;
	printf("Informe um valor para o raio: ");
	scanf("%f", &r);
	a = PI*(r*r);
	printf("A areia do raio informado �: %.2f", a);
	return(0);
	
}