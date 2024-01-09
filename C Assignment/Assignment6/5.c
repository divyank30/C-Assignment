#include<stdio.h>
int main()
{
    int i=1,s=0,n;
    printf("Enter A NUMBER");
    scanf("%d",&n);
    do
    {
        s=i*i*i+s;
        i++;
    } while (i<=n);
    printf("Sum of cubes of first %d Natural No. is %d",n,s);
    return 0;
    

}