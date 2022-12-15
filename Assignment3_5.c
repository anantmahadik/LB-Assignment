#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",cValue-32);
    }

    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character \n");

    scanf("%c",&cValue);

    bRet =ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel character \n");
    }
    else
    {
        printf("It is not vowel character \n");
    }
    return 0;
}