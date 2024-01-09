#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
    {

        printf("\n1. Check century year\n");
        printf("2. Check Non Century Year\n");
        printf("3. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter Century Year");
            scanf("%d",&a);
            if (a%100==0&&a%400==0)
            {
                printf("\n%d  is Leap year",a);
            }
            else
            printf("\n%d is not leap year");
            break;
            case 2:
            printf("Enter Non Century Year");
            scanf("%d",&a);
            if (a%4==0)
            {
                printf("\n%d is leap year",a);
            }
            else
            
            printf("\n%d is not Leap Year",a);
            break;
            case 3:
            exit(0);
            default:
            printf("invalid choice");

        }
    }
    return 0;
}