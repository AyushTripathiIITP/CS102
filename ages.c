#include<stdio.h>

int main(void){
    float age1;
    float age2;
    scanf("%f%f", &age1, &age2);

    float a = age1/age2;
    int b = age1/age2;
    float c = age2/age1;
    int d = age2/age1;
    if(a==b || c==d){
        printf("YES!\n");
    }
    else{
        printf("NO!\n");
    }
return 0;
}