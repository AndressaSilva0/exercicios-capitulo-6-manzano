#include <stdio.h>


int main() {
    int A[6], B[6], C[12];
    int i, j=0;
    
  
    printf("Digite os elementos pares da matriz A:\n");
    for (i = 0; i < 6; i++) {
        printf("Elemento %d:\n", i+1);
        scanf("%d", &A[i]);
        
        if (A[i] % 2 != 0) {
            printf("Valor inválido! Digite um valor par:\n");
            i--;
        }
    }
    
   
    printf("Digite os elementos ímpares da matriz B:\n");
    for (i = 0; i < 6; i++) {
        printf("Elemento %d: \n", i+1);
        scanf("%d", &B[i]);
        
        if (B[i] % 2 == 0) {
            printf("Valor inválido! Digite um valor ímpar:\n");
            i--;
        }
    }
    
    
    for (i = 0; i < 6; i++) {
        C[j] = A[i];
        j++;
        C[j] = B[i];
        j++;
    }
    
  
    printf("Os elementos da Matriz C é:\n");
    for (i = 0; i < 12; i++) {
        printf("Elemento %d: %d\n\n", i+1, C[i]);
    }

    
    return 0;
}