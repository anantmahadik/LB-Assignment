#include<stdio.h>
 
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDif = 0;

    for(iCnt = 1; iCnt< iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;       
        }
        if( (iNo % iCnt) == 0)
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("Non factors sum is %d\n",iSum1);
    printf("Factors sum is %d \n",iSum2);
    iDif = iSum1 - iSum2;
    return iDif;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("Summation is : %d",iRet);  
    return 0;
}