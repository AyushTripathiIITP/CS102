#include<stdio.h>
#include<math.h>

int main(void){
    int n;
    scanf("%d",&n); //n is no of digit of number

    int num;
    scanf("%d", &num); //num is the number to check for

    float base;
    base = pow(10, n);

    // printf("%f", num/base);
    if(pow(10, n-1) == num){
        printf("YES!\n");
    }
    else if((num / base)< 1 && (num/base) > 0.1 ){
        printf("YES!\n");
    }
    else{
        printf("NO!\n");
    }
return 0;
}