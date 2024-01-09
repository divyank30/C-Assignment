#include<stdio.h>
int main()
{
    printf("Enter a number");
    int i=1,n;
    scanf("%d",&n);
    
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}
