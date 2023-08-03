#include <stdio.h>

int main(){

int A[6];
int B[6];
int C[6];
int D[6];
int i;


printf("Digite os elementos da Matriz A: \n");
for ( i = 0; i < 6; i++)
{
    printf("Elemento %d: \n", i+1);
    scanf("%d", &A[i]); 
   
}
printf("Digite os elementos da Matriz B: \n");
for ( i = 0; i < 6; i++)
{
    printf("Elemento %d: \n", i+1);
    scanf("%d", &B[i]); 
}

for ( i = 0; i < 6; i+=2){
    C[i] = A[i];
    C[i+1] = B[i];
    D[i] = A[i+1];
    D[i+1] = B[i+1];
}

printf("Os elementos da Matriz C são: \n");
 for (i = 0; i < 6; i++){
    printf("Elemento %d: %d\n\n", i+1, C[i]);
 }

 printf("Os elementos da Matriz D são: \n");
 for (i = 0; i < 6; i++){
    printf("Elemento %d: %d\n\n", i+1, D[i]);
 }

    return 0;
   
}