#include <stdio.h>

int main(void) {
int notaAluno;
int qtdAluno = 5;
float somaNota = 0;
int i;
for(i = 1; i <= qtdAluno; i++){
 
  printf("escreva a nota %d \n", i);
  scanf("%d",&notaAluno);
  somaNota = somaNota + notaAluno;
 
}
  printf("media da turma %.2f \n", somaNota/qtdAluno);
 
  return 0;
}
