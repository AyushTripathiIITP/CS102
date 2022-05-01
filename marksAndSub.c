#include<stdio.h>

int main(void){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j<m ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    float sum[n];
    //now find average
    for(int i=0 ; i<n ; i++){
        sum[i]=0;
        for(int j=0 ; j<m ; j++){
            sum[i] += arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("student %d has average of %.2f \n", i+1 , sum[i]/m);
    }
return 0;
}