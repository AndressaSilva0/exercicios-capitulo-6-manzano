#include <stdio.h>

int main(){

int A[10], B[10], C[20];
int i;



printf("Digite apenas elementos divisiveis por 2 e 3 na Matriz A: \n");
for(i=0; i<10; i++){
    printf("Elemento %d: \n", i+1);
    scanf("%d", &A[i]);

    if (A[i]%2 !=0 && A[i]%3 !=0 )
    {
      printf("Valor inválido, apenas números divisiveis por 2 e 3:\n");
      i--;
    }
        

}

printf("Digite apenas elementos que são multiplos de 5 na Matriz B: \n");
for(i=0; i<10; i++){
    printf("Elemento %d: \n", i+1);
    scanf("%d", &B[i]);

    if (B[i]%5 !=0)
    {
      printf("Valor inválido, apenas multiplos de 5:\n");
      i--;
    }
        

}

for(i=0; i<10; i++){
       C[i] = A[i];
       C[i+10] = B[i];
      

}

 printf("Os elementos da Matriz C é:\n");
    for (i = 0; i < 20; i++) {
        printf("Elemento %d: %d\n\n", i+1, C[i]);
    }

    
    return 0;

}