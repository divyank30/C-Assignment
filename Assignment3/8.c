#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Year");
    scanf("%d",&a);
   
         if(a%4==0&&a%100!=0)
         printf("Given year is leap year");
        if(a%100==0)
        {
            if(a%100==0&&a%400==0)
        printf("Given year is leap year");
        else
            printf("Given year is not a leap year");
        return 0;
        }
        if(a%4!=0)
        printf("Given number is not a leap year");
    }