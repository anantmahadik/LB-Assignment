#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iEvenSum = 0,iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            } 
            else
            {
                iOddSum = iOddSum + iDigit;
            }

            iNo = iNo / 10; 
        }
        return iEvenSum - iOddSum;
}

int main()
{
    int iValue1 = 0,iRet = 0;

    printf("Please enter number :\n ");
    scanf("%d",&iValue1);

    iRet = CountDiff(iValue1);
    printf("%d",iRet);
    
    return 0;
}