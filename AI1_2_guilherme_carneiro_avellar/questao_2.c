#include <stdio.h>

int main(){
    float n, i, sinal = 1, s = 1;

    printf("\n\nDigite o numero de termos: ");
    scanf("%f", &n);

    for(i = 1; i <= n; i++){
        sinal = sinal * (-1);
        s = s + sinal * ((i / (i+2)));
    }

    printf("\n\ns = %.2f\n\n", s);
    
    return 0;
}