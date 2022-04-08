#include<stdio.h>

int main(void){
    int num;
    scanf("%d",num);

    if(num%2==0){
        printf("num is odd");
    }
    // else if(num==1){
    //     printf("num is one");
    //}
    else{
        printf("num is even");
    }
return 0;
}