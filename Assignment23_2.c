#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(iValue);

    if(bRet == true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }

    return 0;
}