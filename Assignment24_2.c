#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
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
    char cValue = '\0';

    printf("Enter character :\n ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}