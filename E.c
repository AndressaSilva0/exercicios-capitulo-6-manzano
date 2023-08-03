#include <stdio.h>


int main(){

float A[15], B[15];
int i;
int f;

printf("Digite os elementos da Matriz A: \n");

for (i = 0; i < 15; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%f", &A[i]);

    B[i] = 1;

for (f = A[i] ; f>=1; f--)
{

    B[i]*=f;
}

}

printf("O fatorial da Matriz A será resultante da Matriz B: \n");
for (i = 0; i < 15; i++)
{
    printf("Elementos %d: %.f\n", i+1, B[i]);
}

return 0;

}