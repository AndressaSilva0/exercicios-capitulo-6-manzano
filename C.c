#include <stdio.h>


int main(){

int A[20], B[20], C[20];
int i;


printf("Digite os elementos da Matriz A: \n");

for ( i = 0; i < 20; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%d", &A[i]);
    
}
 
  
  printf("Digite os elementos da Matriz B: \n");
    for ( i = 0; i < 20; i++)
    {
    printf("Elementos %d: \n", i+1);
    scanf("%d", &B[i]);
    }


 
 for (i = 0; i < 20; i++)
 {
    C[i] = A[i] - B[i];
    
 }

  printf("Subtraindo a Matriz A e a Matriz B obteremos a Matriz C: \n");

  for ( i = 0; i < 20; i++)
  {
     printf("Elementos %d: %d \n", i+1, C[i]);
  }
  

 
return 0;


}