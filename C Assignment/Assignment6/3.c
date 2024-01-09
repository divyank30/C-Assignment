#include<stdio.h>
int main()
{
    int i=1,s=0,n;
    printf("Enter A NUMBER");
    scanf("%d",&n);
    do
    {
        s=i+s;
        i+=2;
    } while (i<=2*n);
    printf("Sum of first  %d Odd No. is %d",n,s);
    return 0;
    

}