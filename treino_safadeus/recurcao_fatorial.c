#include <stdio.h>

int fatorial(int n){
    if(n == 1){
        return n;
    }
    return n * fatorial(n - 1);
}

int main(){

    printf("\n\nfatorial: %d\n\n", fatorial(4));

    return 0;
}