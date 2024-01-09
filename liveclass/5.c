#include<stdio.h>
int main()
{
    int x,s=0;
    do
    {
        printf("Enter a number");
        scanf("%d",&x);
        s=s+x;

    } while (x);
    printf(" Sum is %d",s);
    return 0;
    
}