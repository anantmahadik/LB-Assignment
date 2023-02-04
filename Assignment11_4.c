#include<stdio.h>

int RangeDisplay(int iStart,int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd || iStart < 0)
    {
        return -1;
    }
    else
    {
        for(int i = iStart; i <= iEnd; i ++)
        {
            if(i % 2 == 0)
            {
                iSum = iSum + i;
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 =0;
    int iRet = 0;

    printf("Please enter starting point :\n ");
    scanf("%d",&iValue1);
    
    printf("Please enter end point :\n ");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);
    if(iRet == -1)
    {
        printf("Invalid number\n");
    }
    else
    {
        printf("Even numbar summation is %d:",iRet);
    
    }
    return 0;
}




