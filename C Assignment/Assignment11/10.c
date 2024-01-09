//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int seriessum(int);
int main()
{
    int x=5;
    printf("sum of the series is %d ",seriessum(x));
}
int seriessum(int n)
{
    int i,j,sum=0;
    for ( i = 1; i <=n; i++)
    {
        int rem=1;
        for ( j =i;j>=1; j--)
        {
            rem=rem*j;
        }
        sum=sum+rem/i;
        
        
    }
    return sum;
    
}