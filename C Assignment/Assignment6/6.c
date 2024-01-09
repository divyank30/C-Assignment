#include<stdio.h>
int main()
{
    int s=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        s=(n*s);
        n--;
    } while (n>=1);
    printf("%d",s);
    return 0;

}