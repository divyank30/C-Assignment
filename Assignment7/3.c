#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("Enter nth nth-1 and nth-2 terms in order ");
    scanf("%d%d%d",&n,&n1,&n2);
    if (n==n1+n2)
    {
        printf("Givens numbers are in the fibonacci Series");
    }
    else
    printf("Given Numbers are not in fibonacci series");
    

}