#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKilometer = 1000;

    return iNo * iKilometer;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf(" %d\n",iRet);
    return 0;
}