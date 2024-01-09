// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int b[]);
int main()
{
    int a[10];
    printf("Smallest number is %d",smallest(a));
    return 0;
}
int smallest(int b[])
{
    int i;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    int small=b[0];
    for ( i = 1; i <=9; i++)
    {
        if (small>b[i])
        {
            small=b[i];
        }
        
    }
    return small;

}