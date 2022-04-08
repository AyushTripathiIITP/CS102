#include<stdio.h>

int main(void){
    int n;
    printf("Enter the num\n");
    scanf("%d", &n);

    switch(n){
        case 1 ... 33: printf("Fail\n");
        break;

        case 34 ... 65 : printf("Pass\n");
        break;

        case 66 ... 100 : printf("Excellent\n");
        break;

        default : printf("error");
    }

return 0;
}