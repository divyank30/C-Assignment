// 7. Write a program to find second smallest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter 10 number");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int smallest=a[0],secondsmallest;
    for ( i = 1; i < 9; i++)
    {
        if (smallest>a[i])
        {
            secondsmallest=smallest;
            smallest=a[i];
        }
        if (smallest<a[i]&&secondsmallest>a[i])
        {
            secondsmallest=a[i];
        }
        
    }
    printf("Second smallest Number is %d",secondsmallest);
    return 0;
    

}