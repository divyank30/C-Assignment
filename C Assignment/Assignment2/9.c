#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
   a= sizeof a;
    printf("sizeof a is %d",a);
    return 0;
}