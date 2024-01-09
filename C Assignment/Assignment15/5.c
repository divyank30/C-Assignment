// 5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
//Function has to return the value of the element.
#include<stdio.h>
int duplicate(int b[]);
int main()
{
    int a[10];
    printf("first occurrence of adjacent duplicate vale is %d",duplicate(a));
    return 0;
}
int duplicate(int b[])
{
    int i;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        if (b[i]==b[i+1])
        {
            return b[i];
        }
    }
}