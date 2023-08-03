#include <stdio.h>

int main(){

float A[5], B[5], C[5], D[15];
int i;


printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 5; i++)
{
    printf("Elementos %d:\n", i+1);
    scanf("%f", &A[i]);

}
printf("Digite os elementos da Matriz B: \n");
for (i = 0; i < 5; i++)
{
    printf("Elementos %d:\n", i+1);
    scanf("%f", &B[i]);
    
}
printf("Digite os elementos da Matriz C: \n");
for (i = 0; i < 5; i++)
{
    printf("Elementos %d:\n", i+1);
    scanf("%f", &C[i]);
    
}

for (i = 0; i < 5; i++)
{
    D[i] = A[i];
    D[i+5] = B[i];
    D[i+10] = C[i];
}

printf("Os elementos da Matriz D é a junção das Matrizes A, B e C: \n");
for (i = 0; i < 15; i++)
{
    printf("Elementos %d: %.f\n", i+1, D[i]);

    
}
return 0;

}