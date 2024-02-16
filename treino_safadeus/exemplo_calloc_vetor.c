#include <stdio.h>
#include <stdlib.h>


int main(){
    int *p = (int *) calloc (10, sizeof(int));
    //p[9] = 30;

    printf("\n%d\n\n", p[9]);


    return 0;
}