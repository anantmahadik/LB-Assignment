#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(iValue);

    if(bRet == true)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}