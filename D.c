#include <stdio.h>
#include <math.h>

int main(){
    

    float A[15], B[15];
    int i;

    printf("Digite os elementos de A: \n");

    for (i = 0; i < 15; i++)
    {
        printf("Elementos %d: ", i+1);
        scanf("%f", &A[i]);
      
       B[i] = pow(A[i], 2);

    }


    printf("Os elementos da Matriz A: \n");
    for (i = 0; i < 15; i++)
    {
        printf("Elementos %d: %.f  \n", i+1, A[i]);

    }
    printf("Os elementos da Matriz B: \n");
    for (i = 0; i < 15; i++)
    {
        printf("Elementos %d: %.f  \n", i+1, B[i]);

    }
     return 0;
    
   
    
    
    
    
    
    
    }








