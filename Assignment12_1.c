#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d\t",iDigit);
            iNo = iNo / 10;

        }  
}

int main()
{
    int iValue1 = 0,iRet = 0;

    printf("Please enter number :\n ");
    scanf("%d",&iValue1);

    DisplayDigit(iValue1);
    
    return 0;
}