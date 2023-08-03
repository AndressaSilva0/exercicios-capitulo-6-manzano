#include <stdio.h>


int main(){

int A[20], B[20];
int i, j, soma;


printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 20; i++)
{
   printf("Elementos %d: \n", i+1);
   scanf("%d", &A[i]);
}

for (i = 0; i < 20; i++)
{ 
    soma = 0;

    for (j = 1; j <=A[i]; j++)
    {
        soma+=j;
    }
   B[i] = soma; 
}

printf("Os elementos da Matriz B são as soma dos correspondentes da Matriz A: \n");
for (i = 0; i < 20; i++)
{
    printf("Elementos %d: %d\n", i+1, B[i]);
}

return 0;

}