#include<stdio.h>

int main(void){
    int n , max , min ;
    //input the value of n
    scanf("%d\n", &n);
    
    for(int i=0 ; i< n-1 ; i++){
        int base;
        scanf("%d\n", &base);
        if(i==0){
            max = base;
            min = base;
        }
        max = (base>max)?base : max ;
        min = (base < min)?base : min;
        n= n-1 ;
    }

    printf("maximum value is %d\n", max);
    printf("minimum value is %d\n",min );
return 0;
}