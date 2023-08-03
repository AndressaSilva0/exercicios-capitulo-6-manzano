#include <stdio.h>
#define T 15

int main(){

float A[T], B[T];
float C[30];
int i;

printf("Digite os valores da Matriz A: \n");
for ( i = 0; i < 15; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%f", &A[i]);
    
}

printf("Digite os valores da Matriz B: \n");
for ( i = 0; i < 15; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%f", &B[i]);
    
}
 for ( i = 0; i < 15; i++)
{
   C[i] = A[i];
   C[i + 15] = B[i];
  
}

printf("A Matriz C é a junção dos elementos da Matriz A e B: \n");
for ( i = 0; i < 30; i++)
{
    printf("Elementos %d: %.f\n ", i+1, C[i]);
}

return 0;

}