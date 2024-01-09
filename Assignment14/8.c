// 7. Write a program to find second smallest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter 10 number");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (a[i]>a[j])
            {
                // Swapping array
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
            
        }
        
    }
    printf("Second smalest Number is %d",a[2]);
    return 0;
    

}