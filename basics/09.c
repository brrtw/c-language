#include<stdio.h>
int main(){	
	float s, snovo;
	printf("informe seu salario: ");
	scanf("%f", &s);
		if (s < 100000){
		snovo = s + 1000;
		printf("seu novo salario e: %.2f", snovo);
		}else {
		printf("seu salario continuara o mesmo");	
		}
	return(0);
}