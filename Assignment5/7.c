#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    do
    {
        printf("%d ",2*i);
        i-=1;
    } while (i>=1);
    return 0;
    
}