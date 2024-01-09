#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a;
    float b=0;
    while(1)
    {
        printf("\n1.For the first 50 units");
        printf("\n2.For the Next 100 units");
        printf("\n3.For the Next 100  units");
        printf("\n4.For the above 250 units");
        printf("\n5.exit");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter elictricty unit ");
            scanf("%d",&a);
            b=(a*0.5)+((a*0.5)*20)/100;
            printf("total electric bill is %f ",b);
            break;
            case 2:
            printf("Enter Electricity unit");
            scanf("%d",&a);
            b=(a-50)*0.75+(50*0.5);
            printf("Total electric bill is %f ",b+(b*20)/100);
            break;
            case 3:
            printf("Enter Electricity unit");
            scanf("%d",&a);
            b=(a-150)*1.20+(100*0.75)+(50*0.5);
            printf("Total Electric bill is %f",b+(b*20)/100);
            break;
            case 4:
            printf("Enter Electricity units");
            scanf("%d",&a);
            b=((a-250)*1.5)+(100*1.20)+(100*0.75)+(50*0.5);
            printf("Total Electric bill is %f ",(b+((b*20)/100)));
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid Choice");

        }
    }
    return 0;
}