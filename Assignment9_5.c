#include<stdio.h>

int FactorialDifference(int iNo)
{
    int iCnt = 0,iEvenCnt = 1, iOddCnt = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenCnt = iEvenCnt * iCnt;            
        }
        else if((iCnt % 2) != 0)
        {
            iOddCnt = iOddCnt * iCnt;
        }
    }
    return iEvenCnt - iOddCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Please enter number");

    scanf("%d",&iValue);

    iRet = FactorialDifference(iValue);
    printf("Factorial Difference is :%d ",iRet);
       
    return 0;
}