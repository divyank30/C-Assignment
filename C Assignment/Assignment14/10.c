// 10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("Enter 10 Number");
    
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);    
    }for ( i = 0; i < 10; i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
    
}