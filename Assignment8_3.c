#include<stdio.h>

int Pattern(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Please enter number");

    scanf("%d",&iValue);

    iRet = Pattern(iValue);

    printf("Factorial is : %d\n",iRet);
    return 0;
}