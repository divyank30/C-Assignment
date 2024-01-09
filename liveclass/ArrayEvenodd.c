#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter five numbers");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        so=so+a[i];
        

    }
    printf("Sum of Even number is %d",se);
    printf("sum of odd numbr is %d",so);
    return 0;
}