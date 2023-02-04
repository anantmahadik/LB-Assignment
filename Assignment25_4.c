#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {   
        if(*str == 'a'|| *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return true;
        }
        
        str++;
    }
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string :\n ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("It contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}