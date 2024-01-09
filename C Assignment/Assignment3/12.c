#include<stdio.h>
int main()
{
    char A;
    printf("Enter any Alphabate");
    scanf("%c",&A);
    if(A>64&&A<91)
    printf("The Alphabate is in upper case");
    if(A>96&&A<123)
    printf("Alphabate is in lower case");
    return 0;
}