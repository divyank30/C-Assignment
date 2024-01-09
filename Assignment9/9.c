#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a;
    while(1)
    {
        printf("\n1.Covert Even Number into its nearest Negative Number");
        printf("\n2.Exit");
        printf("\nEnter Your Choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter Even Number");
            scanf("%d",&a);
            printf("after coverting nearest odd number  is %d",a-1);
            break;
            case 2:
            exit(0);
            default:
            printf("Invalid Choice");

        }
    }
    return 0;
}