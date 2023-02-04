#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0,iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 3 && iDigit < 7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }  
        return iCount;
}

int main()
{
    int iValue1 = 0,iRet = 0;

    printf("Please enter number :\n ");
    scanf("%d",&iValue1);

    iRet = CountEven(iValue1);
    printf("%d",iRet);
    
    return 0;
}