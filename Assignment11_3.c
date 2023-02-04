#include<stdio.h>

int RangeDisplay(int iStart,int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for(int i = iStart; i <= iEnd; i ++)
        {
                 iSum = iSum + i;  
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
    printf("Summation is %d:",iRet);
    return 0;
}



