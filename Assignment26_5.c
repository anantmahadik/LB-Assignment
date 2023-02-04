#include<stdio.h>
#include<stdlib.h>

void CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    printf("%d",iCnt);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
   
    CountWhite(arr);

    return 0;
}