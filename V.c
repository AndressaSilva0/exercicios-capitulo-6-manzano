#include <stdio.h>

int main(){

int A[30];
int i, par=0, impar=0;


printf("Digite os elementos da Matriz A: \n");
for (i = 0; i < 30; i++)
{
    printf("Elemento %d:\n", i+1 );
    scanf("%d", &A[i]);


        if (A[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
   
    
}

printf("Total de valores pares na Matriz A: %d\n", par);
printf("Total de valores impares na Matriz A: %d\n", impar);

return 0;

}