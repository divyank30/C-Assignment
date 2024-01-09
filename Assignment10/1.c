#include<stdio.h>
float Area(float);
int main()
{
    float r,a;
    printf("Enter radious of the circle");
    scanf("%f",&r);
    a=Area(r);
    printf("Area Of Circle is %f",a);
    return 0;

}
float Area(float x)
{
    float s=3.14;
    return s*x*x;

}