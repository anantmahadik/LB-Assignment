#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No)
{
    UINT iMask = 0X0000000F;

    UINT Result = No | iMask ;

    return Result;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);


    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1101    1011    1111

//  0XF0000000
