// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatest(int b[]);
int main()
{
    int a[10];
    printf("Greatest number is %d",greatest(a));
    return 0;
}
int greatest(int b[])
{
    int i;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    int great=b[0];
    for ( i = 1; i <=9; i++)
    {
        if (great<b[i])
        {
            great=b[i];
        }
        
    }
    return great;

}