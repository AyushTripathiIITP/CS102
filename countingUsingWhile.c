#include<stdio.h>

int main(void){
    int n;
    printf("Enter number\n");
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
return 0;
}