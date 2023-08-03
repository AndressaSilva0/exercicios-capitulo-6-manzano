#include <stdio.h>


int main(){

int A[12], B[12];
int i;

printf("Digite os elementos da Matriz A: ");

for (i = 0; i < 12; i++)
{
    printf("Elemento %d: \n", i+1);
    scanf("%d", &A[i]);

}

for (i = 0; i < 12; i++)
{
    if (A[i]%2 !=0)
    {
        B[i] = A[i]*2;
    }else
    {
        A[i]%2==0;
        B[i] = A[i];
    }
       
}

printf("Os elementos da Matriz B: \n");
for (i = 0; i < 12; i++){
   printf("Elemento %d: %d \n", i+1, B[i]);
}

return 0;

}