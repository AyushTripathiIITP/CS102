#include<stdio.h>

int main(void){
    int num;
    int flag=0 ;
    scanf("%d", &num);
    while(num >=1){
        ++flag;
        num = num/10 ;
    }
    printf("%d", flag);
return 0;
}