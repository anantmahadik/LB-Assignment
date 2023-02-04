#include<stdio.h>

double CircleArea(float fRadious)
{
    float PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadious * fRadious;

    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Please enter number");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("%lf",dRet);

    return 0;
}