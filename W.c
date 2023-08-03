#include <stdio.h>

int main(){

int A[10], B[10], C[10];
int i;


printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 10; i++)
{
    printf("Elemento %d:\n", i+1 );
    scanf("%d", &A[i]);

    
}

printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 10; i++)
{
    printf("Elemento %d:\n", i+1 );
    scanf("%d", &B[i]);

}

for (i = 0; i < 10; i++)
{
   C[i] = (A[i] + B[i]) * (A[i] + B[i]);
}

printf("Os elementos da Matriz C é: \n");
for (i = 0; i < 10; i++)
{
    printf("Elemento %d: %d\n", i+1, C[i]);   
}

return 0;
}