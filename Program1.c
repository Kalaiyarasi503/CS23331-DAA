/*Find Duplicate in Array.
Given a read only array of n integers between 1 and n, find one number that repeats*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
}