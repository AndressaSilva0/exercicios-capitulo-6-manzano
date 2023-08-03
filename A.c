#include <stdio.h>
#include <string.h>
#define N 10
#define tam_max 100

int main(){

char nome[N][tam_max];
int i;

printf("Digite até dez nomes: \n");

for(i=0; i<N; i++){
printf("Nomes %d: \n", i+1);
scanf("%99[^\n]s", nome[i]);
fflush(stdin);

}

printf("\n Nomes digitados: \n");

for ( i = 0; i < N; i++){
    printf("%d: %s\n", i+1, nome[i]);
}
return 0;


}