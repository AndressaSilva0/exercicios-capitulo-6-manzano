#include <stdio.h>

int main(){


float A[20], B[20];
int i;



printf("Digite os valores da Matriz A: \n");
for (i = 0; i < 20; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%f", &A[i]);
  
}

for (i = 0; i < 20; i++)
{
   
   B[i] = A[19 - i];

}
printf("Os elementos da Matriz A: \n");
for ( i = 0; i < 20; i++)
{
    printf("Elementos %d: %.f\n ", i+1, A[i]);
}

printf("Os elementos da Matriz B: \n");
for ( i = 0; i < 20; i++)
{
    printf("Elementos %d: %.f\n ", i+1, B[i]);
}

return 0;


}