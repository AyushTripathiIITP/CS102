#include<stdio.h>

int main(void){
    int ages[30];
    int sum=0 ;
    int min = 0 ;
    int max = 150;
    for(int i=0 ; i<30 ; i++){
        scanf("%d",&ages[i]);
        sum += ages[i];
        if(ages[i] < min){
            min = ages[i];
        }
        if(ages[i] > max){
            max = ages[i];
        }
    }
    printf("%d%d%d",sum,min,max);
return 0;
}