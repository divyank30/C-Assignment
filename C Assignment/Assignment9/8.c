#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a;
    while(1)
    {
        printf("\n1.Covert Positive Number into negative");
        printf("\n2.Convert Negative Number into positive");
        printf("\n3.Exit");
        printf("\nEnter Your Choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter Positive Number");
            scanf("%d",&a);
            printf("after coverting number is %d",-a);
            break;
            case 2:
            printf("Enter Negative Number");
            scanf("%d",&a);
            printf("after coverting number is %d",-a);
            break;
            case 3:
            exit(0);
            default:
            printf("Invalid Choice");

        }
    }
    return 0;
}