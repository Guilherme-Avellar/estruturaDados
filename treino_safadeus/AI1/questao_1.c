//ponteiro para função

#include <stdio.h>
#include <stdlib.h>

void produto(int a, int b, int *c){

    *c = a * b;
}



int main(){

    int a, b, c = 0;
  
    scanf("%d %d", &a, &b);
    printf("\n\na = %d\nb = %d\nc = %d\n\n", a, b, c);

    produto(a, b, &c);
    printf("\n\na = %d\nb = %d\nc = %d\n\n", a, b, c);

    return 0;
}