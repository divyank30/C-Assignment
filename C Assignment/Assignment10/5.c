#include<stdio.h>
void printN(int);
void printN(int a)
{
    int i=1;
    for ( i = 1; i <=a; i++)
    {
        printf("%d\n",2*i-1);
    }
    
}
int main()
{
    int x;
    printf("Enter N natural Number");
    scanf("%d",&x);
    printN(x);
    return 0;
}