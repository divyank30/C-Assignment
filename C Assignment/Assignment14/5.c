// 5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Numbers");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
    }
    int smallest=a[0];
    for ( i = 0; i <=9; i++)
    {
        
        if (smallest>a[i])
        {
            smallest=a[i];
        
    }
    }
        printf("smallest number is %d",smallest);
    
}