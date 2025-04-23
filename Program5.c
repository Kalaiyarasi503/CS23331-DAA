/*Given an array A of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[j] - A[i] = k, i != j.
Input Format:
First Line n - Number of elements in an array
Next n Lines - N elements in the array
k - Non - Negative Integer*/
#include<stdlib.h>
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]-arr[i]==k && i!=j){
                printf("%d",1);
                exit(0);
            }
        }
    }printf("%d",0);
}