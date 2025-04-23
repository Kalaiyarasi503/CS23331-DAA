/*Given a sorted array of integers say arr[] and a number x. Write a recursive program using divide and conquer strategy to check if there exist two elements in the array whose sum = x. If there exist such two elements then return the numbers, otherwise print as “No”.
Note: Write a Divide and Conquer Solution*/
#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int left=0,right=n-1;
    int found=0;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==x){
            printf("%d\n",arr[left]);
            printf("%d\n",arr[right]);
            found=1;
            break;
    }    
    if (sum<x){
        left++;
    }
    else{
        right++;
    }
}
if(!found){
    printf("No\n");
}
return 0;
}
