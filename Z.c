#include <stdio.h>

int main(){

int A[10];
int i;
float impar=0;
float porcentagem;


printf("Digite os elementos da Matriz A:\n");
for(i=0;i<10;i++){
    printf("Elemento %d:\n", i+1);
    scanf("%d",&A[i]);  

if (A[i] % 2 != 0) {
            impar++;
        }


}

porcentagem = impar / 10 * 100;



printf("Total de elementos impares da Matriz A: %.f", impar);
printf("\n");
printf("O percentual de numeros impares existentes na matriz A é: %.f", porcentagem);
return 0;
}