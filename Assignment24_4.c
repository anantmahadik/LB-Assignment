#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    char iValue = '\0';
    bool bRet = false;

    printf("Enter character :\n ");
    scanf("%c",&iValue);

    bRet = ChkSpecial(iValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}