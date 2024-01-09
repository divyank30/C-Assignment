#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the 5 subects marks");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    printf("student is pass ");
    else
    printf("Student is fail");
    return 0;
}