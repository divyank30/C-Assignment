#include<stdio.h>
int main()
{
    int i=1,s=0,n;
    printf("Enter n natural number");
    scanf("%d",&n);
    do
    {
        s=i+s;
        i++;
    } while (i<=n);
    printf("Sum of N Natural No. is %d",s);
    return 0;
    
}