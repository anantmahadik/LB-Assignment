#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Please enter number");
    scanf("%d",&iValue1);
    printf("Please enter number");
    scanf("%d",&iValue2);
    bRet = ChkEqual(iValue1,iValue2);
    
    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}