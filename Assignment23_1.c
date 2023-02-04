#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(iValue);

    if(bRet == true)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}