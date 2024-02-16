#include <stdio.h>

int main(){
    int n, mult = 1;
    scanf("%d", &n);

    for(int i = 1; i <= n; i ++){
        if(i % 2 != 0)
            mult *= i;
    }

    printf("\n\n\nmultiplicacao: %d \n\n", mult);

    return 0;
}