#include<stdio.h>

double ReactArea(float fWidth,float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;    
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Please enter width");
    scanf("%f",&fValue1);

    printf("Please enter height");
    scanf("%f",&fValue2);

    dRet = ReactArea(fValue1,fValue2);


    printf("%lf",dRet);
    
    return 0;
}