#include <stdio.h>
#include <math.h>

typedef struct{
    double n1, n2, n3;
}aluno;

int main()
{
   aluno aluno1;
   printf("infome as 3 notas: ");
   scanf("%lf %lf %lf", &aluno1.n1, &aluno1.n2, &aluno1.n3);
   double media;
   media = cbrt(aluno1.n1 * aluno1.n2 * aluno1.n3);
   if(media >=6){
       printf("aprovado");
   }
   else{
       printf("reprovado");
   }

    return 0;
}