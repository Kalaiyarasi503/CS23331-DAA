/*Convert the following algorithm into a program and find its time complexity using the counter method.
void function (int n)
{
    int i= 1;
    int s =1;
    while(s <= n)
    {
         i++;
         s += i;
     }      
}     
*/
#include<stdio.h>
int func(int n){
    int c=0;
    int i=1;
    c++;
    int s=1;
    c++;
    while(s<=n){
        c++;
        i++;
        c++;
        s+=i;
        c++;
    }
    c++;
    return c;
}
int main(){
    int n,c;
    scanf("%d",&n);
    c=func(n);
    printf("%d\n",c);
    return 0;
}    