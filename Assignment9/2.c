#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
    {

        printf("\n1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Sum is %d",a+b);
            break;
            case 2:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("difference is %d",a-b);
            break;
            case 3:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("product is %d",a*b);
            break;
            case 4:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Qurtient is %d",a/b);
            break;
            case 5:
            exit(0);
            default:
            printf("invalid choice");

        }
    }
    return 0;
}