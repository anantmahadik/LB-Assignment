#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 1;

    dCelsius = (fTemp -32) * (5/9);

    return dCelsius;    
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Please enter temperature in fahrenheit");
    scanf("%d",&fValue);

    dRet = FhtoCs(fValue);

    printf(" %f\n",dRet);
    return 0;
}