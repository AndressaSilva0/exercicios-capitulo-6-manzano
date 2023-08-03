#include <stdio.h>

int main(){

int A[6], B[6];
int i;


printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 6; i++)
{
    printf("Elemento %d:\n", i+1);
    scanf("%d", &A[i]);

    
}

for (i = 0; i < 6; i++) {
        if (i % 2 == 0)
            B[i] = A[i + 1]; //índice par recebe elemento de índice ímpar
        else
            B[i] = A[i - 1]; //índice ímpar recebe elemento de índice par
    }

printf("Os elementos da Matriz A são:\n");
for (i = 0; i < 6; i++)
{
    printf("Elemento %d: %d\n\n", i+1, A[i]);
}

printf("Os elementos da Matriz B são:\n");
for (i = 0; i < 6; i++)
{
    printf("Elemento %d: %d\n\n", i+1, B[i]);
}

return 0;

}