#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    while (n>=1)
    {
        printf("%d ",(n*2-1));
        n--;
    }
    return 0;
}