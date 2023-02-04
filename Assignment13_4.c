#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0,iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > 0)
            {
            iMult = iMult * iDigit;
            
            } 
            iNo = iNo / 10; 
        }
        return iMult;
}

int main()
{
    int iValue1 = 0,iRet = 0;

    printf("Please enter number :\n ");
    scanf("%d",&iValue1);

    iRet = MultDigit(iValue1);
    printf("%d",iRet);
    
    return 0;
}