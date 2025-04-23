/*Find Duplicate in Array.

Given a read only array of n integers between 1 and n, find one number that repeats*/
#define max 1000000
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int arr[max]={0};
    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    for(int i=0;i<max;i++){
        if(arr[i]>1){
           printf("%d",i); 
        }
    }
}
