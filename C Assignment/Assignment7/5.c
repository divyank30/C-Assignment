#include<stdio.h>
int main()
{
    int a,b,i,count;
    i=a;
    printf("Enter Two Number");
    scanf("%d %d",&a,&b);
    while(i>=1)
    {
        if ((a%i==0)&&(b%i==0))
        {
           
            if (i==1)
            {
                /* code */
                printf("Given Numbers Are Co-Prime");
            }
            else
            printf("Given Numbers Are Not Co-prime");
            break;
        }
        i--;
    }
    
    return 0;
}