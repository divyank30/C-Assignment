// . Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int a[10],sume=0,sumo=0,i;
    printf("Enter 10 numbers");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i<=9; i++)
    {
        if (a[i]%2==0)
        {
            sume=sume+a[i];
        }
        else
        sumo=sumo+a[i];
        
    }
    printf("Sum Of Even Number is %d ",sume);
    printf("sum of odd number is %d",sumo);
    
}