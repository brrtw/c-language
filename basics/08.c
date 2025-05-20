#include<stdio.h>
int main()
{
	int n1,n2;
	int s,sb,m,d,r;
	printf("Informe o primeiro valor: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor: ");
	scanf("%d", &n2);
	s= n1+n2;
	sb= n1-n2;
	m= n1*n2;
	d= n1/n2;
	r= n1%n2;
	printf("A soma dos numeros e: %d\nA subtracao e: %d\nA multiplicacao e: %d\nA divisao dos numeros e: %d\nO resto da divisao e: %d", s,sb,m,d,r);
	return (0); 
}