#include <stdio.h>
#include <math.h>

typedef struct{
    double n1, n2, n3, media;
}n;

int main(){
   n aluno[4];
   for(int i = 0 ; i<4 ; i++){
       printf("informe as notas do %d aluno: ", i+1);
       scanf("%lf %lf %lf", &aluno[i].n1, &aluno[i].n2, &aluno[i].n3);
   }
   for(int i = 0 ; i<4 ; i++){
       aluno[i].media = (aluno[i].n1 + aluno[i].n2 + aluno[i].n3)/3;
   }
   for(int i = 0 ; i<4 ; i++){
       printf("media do %d aluno foi: %lf ", i+1, aluno[i].media);
       printf("\n");
   }
   
   return 0;
}