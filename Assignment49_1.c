#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;


//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0100    0000    0000    0000

//  0       0       0       0       4       0       0       0

//  00000800

// 0X00004000


BOOL ChkBit(UINT iNo)
{
    UINT Mask = 0X00004000;
    UINT Result = 0;

    if(Result == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = ChkBit(Value);

    if(bRet == true)
    {
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is off\n");
    }
    return 0;
}