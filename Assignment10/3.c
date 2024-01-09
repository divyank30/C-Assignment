#include<stdio.h>
int evenodd(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("return value is %d",evenodd(x));
    return 0;

}
int evenodd(int a)
{
    if (a%2==0)
    {
        return 1;
    }
    return 0;

}