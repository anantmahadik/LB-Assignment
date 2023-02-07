#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No,UINT Pos)
{
    UINT iMask = 0X00000001;

    iMask = iMask << (Pos-1);

    UINT Result = No ^ iMask;

    return Result;
}

int main()
{
    UINT Value = 0, Position1 = 0, Position2 = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    printf("Enter the posoition : \n");
    scanf("%d",&Position1);

    iRet = OffBit(Value,Position1);

    printf("Updated number is : %d\n",iRet);

    return 0;
}

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1101    1011    1111

//  0XFFFFFDBF
