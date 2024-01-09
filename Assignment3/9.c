#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbr");
    scanf("%d %d %d",&a,&b,&c);
    // if (a>b)
    //     a>c?printf("%d",a):printf("%d ",c);
    // else
    //     b>c?printf("%d",b):printf("%d ",c);
    printf("%d",a>b ? a>c?a:c : b>c?b:c);
    return 0;

}