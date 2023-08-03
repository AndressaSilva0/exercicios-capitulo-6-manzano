#include <stdio.h>

int main(){

int A[10], B[10];
int i;

printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 10; i++)
{
    printf("Elementos %d: ", i+1);
    scanf("%d", &A[i]);

    B[i] = -A[i];
}

printf("A matriz B eh: \n");
for (i = 0; i < 10; i++)
{
    printf("Elementos %d: %d\n", i+1, B[i]);
}

return 0;

}