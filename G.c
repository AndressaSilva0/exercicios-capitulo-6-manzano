#include <stdio.h>
#include <string.h>


int main(){


char A[20][50];
char B[30][50];
char C[50][50];
int i;


printf("Digite os nomes na Matriz A: \n");

for (i = 0; i < 20; i++)
{
    printf("Elementos %d: ", i+1);
    scanf("%s", A[i]);
}

printf("Digite os elementos da Matriz B: \n");

for (i = 0; i < 30; i++)
{
    printf("Elementos %d: \n", i+1);
    scanf("%s", B[i]);
}

for ( i = 0; i < 20; i++)
{
    strcpy(C[i], A[i]);
}
for (i = 0; i < 30; i++)
{
     strcpy(C[i+20], B[i]);
}


printf("A Matriz C é a junção da Matriz A e B: \n");
for (i = 0; i < 50; i++)
{
    printf("Elementos %d: %s\n", i+1, C[i]);
}



return 0;

}