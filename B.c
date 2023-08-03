#include <stdio.h>


int main(){

int A[8];


printf("Digite os elementos da Matriz A: \n");

for (int i = 0; i < 8; i++)
{
printf("Elementos %d: \n", i+1);
scanf("%d", &A[i]);

}

printf("Os elementos da Matriz B: \n");

for (int i = 0; i < 8; i++){

    printf("%d: %.d\n\n", i+1, A[i]*3);

   
}

return 0;
}


