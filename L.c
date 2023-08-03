#include <stdio.h>


int main(){


float A[10]; 
float B[10];
int i;

printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 10; i++)
{
    printf("Elementos %d: ", i+1);
    scanf("%f", &A[i]);

    B[i] = A[i]/2;
}

printf("A matriz B eh: \n");
for (i = 0; i < 10; i++)
{
    printf("Elementos %d: %.1f\n", i+1, B[i]);
}

return 0;


}