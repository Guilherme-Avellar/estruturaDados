#include <stdio.h>
#include <stdlib.h>

void ponteiro(int *p){
    *p = *p + 6;
}

int main(){
    int *p, a = 1;
    p = &a;

    ponteiro(p);

    printf("\n\n%d\n\n", a);

    return 0;
}