#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month number");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    printf("31 Days in this month");
    if(a==4||a==6||a==9||a==11)
    printf("30 Days in this number");
    if(a==2)
    printf("28 Or 29 Days in this month");
    return 0;




}