#include <stdio.h>

int main(){

int A[15];
int i;
int par=0;

printf("Digite os elementos da Matriz A:\n");
for(i=0;i<15;i++){
    printf("Elemento %d:\n", i+1);
    scanf("%d",&A[i]);

    if (A[i] % 2 == 0) {
            par++;
        }

}

printf("Total de elementos pares da Matriz A: %d\n", par);

return 0;

}