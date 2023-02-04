#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSquareMeter = 0.0929;

    return dSquareMeter * iNo ;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Please enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d",dRet);
    
    return 0;
}