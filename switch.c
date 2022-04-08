#include<stdio.h>

int main(void){
    int n;
    printf("pick a number between 1 and 4\n");
    scanf("%d", &n);

    switch(n){
        case 1: printf("you chose 1");
        break;

        case 2: printf("you chose 2");
        break;

        case 3: printf("you chose 3");
        break;

        case 4: printf("your chose 4");
        break;

        //using switch for range application

        case 5 ... 8: printf("you chose a number in 5 to 8");
        break;
    }

return 0;
}