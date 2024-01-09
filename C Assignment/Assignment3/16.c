#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Chracter");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    printf("The Alphabate is in upper case");
    if(ch>='a'&& ch<='z')
    printf("Alphabate is in lower case");
    if(ch>='0'&&ch<='9')
    printf("this is a digit");
    return 0;
}