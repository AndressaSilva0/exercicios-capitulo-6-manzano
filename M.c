#include <stdio.h>


int main(){

int num, i;
int A[10];


printf("Digite um valor inteiro: \n");
scanf("%d", &num);

 for (i = 0; i < 10; i++) {
         A[i] = num + (i + 1);
    }

printf("Elementos da matriz A:\n");
    for (i = 0; i < 10; i++) {
        printf("Elementos %d: %d\n",i+1,  A[i]);
    }

    return 0;
}