#include<stdio.h>
int main()
{
    int a,b;
    printf("Entere A Number");
    scanf("%d",&a);
    printf("Enter a digit");
    scanf("%d",&b);
    a=(a*10)+b;
    printf("The Final Number will be %d",a);
    return 0;
}