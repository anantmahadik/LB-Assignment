#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
    char iValue = '\0';
    bool bRet = false;

    printf("Enter character :\n ");
    scanf("%c",&iValue);

    bRet = ChkDigit(iValue);

    if(bRet == true)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}