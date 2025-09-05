#include<stdio.h>
int main()
{
    // int a, b, c;
    float a,b,c,d;
    printf("Enter a,b,c : ");
    scanf("%f %f %f",&a,&b,&c);
    d = (a+b+c)/3;
    printf("The avg is : %f",d);
    return 0;
}