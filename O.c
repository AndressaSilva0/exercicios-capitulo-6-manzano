#include <stdio.h>


int main(){

float A[25];
float B[25];
int i;

printf("Digite em graus Celsius os elementos da Matriz A: \n");

for(i=0;i<25;i++){
printf("Elemento %d:\n", i+1);
scanf("%f", &A[i]);

B[i] = (A[i]*1.8)+32;
    
}


printf("Os elementos em graus Celsius da Matriz A: \n");
for(i=0;i<25;i++){
    printf("Elemento %d: %.f \n", i+1, A[i]);
}

printf("Os elementos em Fahrenheit da Matriz B: \n");
for(i=0;i<25;i++){
    printf("Elemento %d: %.f\n", i+1, B[i]);

}

return 0;

}