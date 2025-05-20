#include<stdio.h>
int main(){	
	int n;
	printf("Informe um numero: ");
	scanf("%d", &n);
		if(n == 0){
		 printf("O numero é igual a zero");
		}else {
		 printf("O numero é diferente de zero, tente novamente");
	      }
	return(0);
}