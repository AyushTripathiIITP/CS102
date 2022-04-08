#include<stdio.h>

int main(void){
    float celsius,fahrenheit;
    printf("Enter temperature in celsius!\n");
    scanf("%f",&celsius);

    fahrenheit = (celsius*(9/5))+32 ;

    printf("Temperature in fahrenheit is %6f\n",fahrenheit);

return 0;
}