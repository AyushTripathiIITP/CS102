#include<stdio.h>

int main(void){
    int x=4;
    int y=9;
    int z=2;

    x=(y<z)?y:z;

    // if(y<z){
    //     x=y;
    // }
    // else{
    //     x=z;
    // }

    printf("%d",x);
return 0;
}