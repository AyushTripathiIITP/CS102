#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int Rarr[n];
    for(int i=n-1 ; i >= 0 ; i--){
        Rarr[n-i-1] = arr[i];
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",Rarr[i]);
    }
return 0;
}