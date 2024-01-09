#include<stdio.h>
int main()
{
    int x;
    printf("Enter Day Number of the week\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Hi There...start your monday");
        break;
        case 2:
        printf("Good Morning,Tuesday");
        break;
        case 3:
        printf("Good afternoon,Wednesday");
        break;
        case 4:
        printf("Good Evening,thursday");
        break;
        case 5:
        printf("it's nice to meet you....,friday");
        break;
        case 6:
        printf("It's pleasure to meet you.......,saturday");
        break;
        case 7:
        printf("Enjoy your day...........,sunday");
        break;
        default :
        printf("Invalid Choice");
        break;
    }
    return 0;
}