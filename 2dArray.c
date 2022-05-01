#include<stdio.h>

int main(void){
    int arr[5][4]={{1,2,3,4},{8,2,3,4},{7,2,3,4},{9,2,3,4}};
    for(int i=0 ; i<5 ; i++){
    printf("%d ", &arr[i][0]);
    //using & gives us the address but using without it we get the direct values
    }
return 0;
}