// 7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate(int b[]);
int main()
{
    int a[10];
    printf("Toal number of Duplicate Element is %d",duplicate(a));
    return 0;
}
int duplicate(int b[])
{
    int i,j,count=0;
    printf("Enter 10 number");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i <9; i++)
    {
        for ( j =i+1; j <=9; j++)
        {
            if (b[i]==b[j])
            {
                count++;
               // break;
            }
        }     
    }
    return count;
}