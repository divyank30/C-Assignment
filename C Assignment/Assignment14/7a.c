// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter 10 number");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int largest=a[0],secondlargest;
    for ( i = 1; i < 9; i++)
    {
        if (largest<a[i])
        {
            secondlargest=largest;
            largest=a[i];
        }
        if (largest>a[i]&&secondlargest<a[i])
        {
            secondlargest=a[i];
        }
        
    }
    printf("Second Largest Number is %d",secondlargest);
    return 0;
    

}