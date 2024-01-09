#include<stdio.h>
int main()
{
    int x,a,b;
    while (1)
    {
        printf("\n1.addition");
        printf("\n2.Substraction");
        printf("\n3.Multplication");
        printf("\n4.Division");
        printf("\n5.Exit");
        printf("\n\nEnter Your Choice");
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("Sum is %d",a+b);
            break;
        case 2:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("Difference is %d",a-b);
            break;
        case 3:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("product is %d",a*b);
            break;
        case 4:
            printf("Enter two number");
            scanf("%d%d",&a,&b);
            printf("Qurtient is %d",a/b);
            break;
        case 5:
        //break;
        exit(0);
        default:
        printf("Invalid Choice");
        }//End Switch
        // if (x==5)
        // {
        //     break;
        // }
        
    }// End of while
    return 0;
    
}