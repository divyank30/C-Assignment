// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
int unique(int b[]);
int main()
{
    int a[10];
    unique(a);
    return 0;
}
int unique(int b[])
{
    int i,j;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        int count=0;
        for ( j =i+1; j <=9; j++)
        {
            if (b[i]==b[j])
            {
                count++;
            }
        }
        if (count==0)
        {
            printf("%d ",b[i]);
        }
           
    }
}