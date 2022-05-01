#include<stdio.h>

int main(void){
    int buf[8]={0,1,2,3,4,5,6,7};
    printf("address is %p/n %p", &(buf+1)[0] , (buf+1)[0]);
return 0;
}