#include<stdio.h>
int main()
{
    int x,a,b,c;
    while(1)
    {

        printf("\n1. Check wether a given set of three numbers are length of an isosceles triangle or not\n");
        printf("2. check wether a given set of three numbers are length of sides of a right angled triangle or not\n");
        printf("3. check wether a given set of three numbers are equilateral triangle or not\n");
        printf("4. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter three sides of the isosceles triangle");
            scanf("%d%d%d",&a,&b,&c);
            if ((a==b||b==c||c==a)&&(a+b>c&&b+c>a&&a+c>b))
            {
                printf("given set of three numbers are length of an isosceles triangle ");
            }
            else
             printf("given sets of length not performing isosceles triangle ");
            break;
             case 2:
            printf("Enter three sides of the right angle triangle");
            scanf("%d%d%d",&a,&b,&c);
            if ((a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)&&(a+b>c&&b+c>a&&a+c>b))
            {
                printf("given set of three numbers are length of right angle triangle ");
            }
            else
             printf("given sets of length not performing right angle triangle ");
            break;
             case 3:
            printf("Enter three sides of the equiletral triangle");
            scanf("%d%d%d",&a,&b,&c);
            if ((a==b==c)&&(a+b>c&&b+c>a&&a+c>b))
            {
                printf("given set of three numbers are length of an equiletrel triangle ");
            }
            else
             printf("given sets of length not performing equiletral triangle ");
            break;
            case 4:
            exit(0);
            default:
            printf("invalid choice");

        }
    }
    return 0;
}