#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
            break;
        }
        str++;
    }
    if(iCnt > 0 )
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
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}