#include<stdio.h>

int main(void){
    int num;
    scanf("%d", &num);
     
     long long int factorial;
     factorial =1 ;

     while(num > 0){
         factorial *= num;
         num-- ;
     }

     printf("%lld", factorial);
return 0;
}