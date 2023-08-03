#include <stdio.h>


int main(){

int A[15];
int B[15];
int i;

printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 15; i++)
{
    printf("Elemento %d: \n", i+1);
    scanf("%d", &A[i]);

    if (A[i] % 2 == 0)
    {
        B[i] = A[i]/2;
    }else
    {
        A[i]%2 !=0;
        B[i] = (A[i]*1.5);
    }
       
}

 printf("Os elementos da Matriz B são: \n");
 for (i = 0; i < 15; i++){
    printf("Elemento %d: %d\n\n", i+1, B[i]);
 }
    return 0;
}