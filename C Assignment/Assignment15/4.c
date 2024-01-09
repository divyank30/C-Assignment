// 4. Write a function to rotate an array by n position in d direction.
#include<stdio.h>
int rotate(int b[]);
int main()
{
    int a[5],i;
    rotate(a);
    for ( i = 0; i <5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
int rotate(int b[])
{
    int i,d,j;
    printf("Enter 5 Number");
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nEnter value of d");
    scanf("%d",&d);
    for ( j = 0; j < d; j++)
    {
        int temp=b[0];
        for ( i = 0; i <4; i++)
        {
            b[i]=b[i+1];
        }
          b[4]=temp;
    }
    
    return b[i];
    
    
}