#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    srand(time(0));

    int j = rand() ;
    printf("%d %d", j, RAND_MAX);
return 0;
}