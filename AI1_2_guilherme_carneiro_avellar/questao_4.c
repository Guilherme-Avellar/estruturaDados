#include <stdio.h>

void inteiro_fracionaria(float *n, float *f){
    int v = *n;
    *f = *n - v;
    *n = v;
}

int main(){
    float N, f;
    
    N = 12.4444; //escolher o valor

    inteiro_fracionaria(&N, &f);

    printf("\n\ni = %f, f = %f", N, f);

    return 0;
}