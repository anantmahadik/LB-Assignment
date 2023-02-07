#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
    UINT iMask = 0X00000001;
    UINT Result = 0;

    iMask = iMask << (Pos-1);

    iMask = No | iMask;
    
    if(No == iMask)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

int main()
{
    UINT Value = 0, Position = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the posoition : \n");
    scanf("%d",&Position);

    OffBit(Value,Position);

    

    return 0;
}
