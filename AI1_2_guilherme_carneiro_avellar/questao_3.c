#include <stdio.h>
#define N 5


int main(){
    int i, j, aux;

    printf("\n\n");

    for(i = 1; i < N; i ++){
        for(j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}