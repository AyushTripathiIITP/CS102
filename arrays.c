#include<stdio.h>

int main(void){
    int num[10];
    int sum = 0;
    for(int i=0 ;i<10 ; i++){
        scanf("%d" , &num[i]);
    }

    for(int i =0 ; i< 10 ; i++){
        sum += num[i];
    }
    printf("%d" , sum);
return 0;
}