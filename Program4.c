/*Find the intersection of two sorted arrays.

OR in other words,

Given 2 sorted arrays, find all the elements which occur in both the arrays*/
#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);  

    while(t--) {
        int n;
        scanf("%d", &n);  
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int m;
        scanf("%d", &m);  
        int brr[m];
        for(int i = 0; i < m; i++) {
            scanf("%d", &brr[i]);
        }

    
        int i = 0, j = 0;
        while(i < n && j < m) {
            if(arr[i] < brr[j]) {
                i++;
            } else if(arr[i] > brr[j]) {
                j++;
            } else {
                printf("%d ", arr[i]);
                i++;
                j++;
            }
        }

        printf("\n");
    }

    return 0;
}