#include<stdio.h>
int main()
{
    //printf("\"%%d\"");//1st method

    // char a='%',b='d';// 2nd method
    // printf("\"%c%c\"",a,b);// 2nd method

    printf("\"%c%c\"",'%','d');//3rd method
    return 0;
}