#include <stdio.h>
int main(){
	float n1, n2, n3, media;
	printf("Informe as 3 notas que calcularam sua media: ");
	scanf("%f%f%f", &n1,&n2,&n3);
	media = (n1+n2+n3)/3;
	printf("Sua media foi: %f", media);
	return(0);
}