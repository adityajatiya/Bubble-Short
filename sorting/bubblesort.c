#include<stdio.h>
int main(){
    int arr[10]={210,9,100,7,6,32,4,45,2,1};
    int n=10;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}