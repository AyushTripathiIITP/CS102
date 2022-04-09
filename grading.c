#include<stdio.h>

int main(void){
    int n;
    printf("Enter your score\n");
    scanf("%d", &n);

    switch(n){
        case 0 ... 30:
        printf("Fail\n");
        break;
        case 31 ... 40:
        printf("DD\n");
        break;
        case 41 ... 50:
        printf("CD\n");
        break;
        case 51 ... 60:
        printf("CC\n");
        break;
        case 61 ... 70:
        printf("BC\n");
        break;
        case 71 ... 80:
        printf("BB\n");
        break;
        case 81 ... 90:
        printf("AB\n");
        break;
        case 91 ... 100:
        printf("AA\n");
        break;
        default:
        printf("Invalid Input\n");
    }

return 0;
}