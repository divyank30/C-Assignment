//8. Write a function to calculate the number of arrangements one can make from n items 
//and r selected at a time. (TSRS)
#include<stdio.h>
int fact (int);
int main()
{
    int n,r;
    printf("Enter N items ");
    scanf("%d",&n);
    printf("Ente selected items ");
    scanf("%d",&r);
    int arr= fact(n)/fact(n-r);
    printf("Number of Arrangements are %d ",arr);
    return 0;
}   
int fact (int x)
{
    int i,s=1;
    for ( i = 1; i <=x; i++)
    {
        s=s*i;
    }
    return s;
    
}