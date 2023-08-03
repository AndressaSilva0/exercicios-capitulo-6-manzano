#include <stdio.h>

int main(){

   float A[20];
    float me, ma, soma = 0;
    float media;
    int i;

    printf("Digite as temperaturas:\n");
    for ( i = 0; i < 20; i++) {
        printf("Temperatura %d: ", i + 1);
        scanf("%f", &A[i]);
        soma += A[i];
    }

    me = A[0];
    ma = A[0];
    for (i = 0; i < 20; i++) {
        if (A[i] < me) {
            me = A[i];
        }
        if (A[i] > ma) {
            ma = A[i];
        }
    }

    
      media = soma / 20;

    
    printf("\nMenor temperatura: %.2f graus Celsius\n", me);
    printf("Maior temperatura: %.2f graus Celsius\n", ma);
    printf("Média das temperaturas: %.2f graus Celsius\n", media);

    return 0;
}

