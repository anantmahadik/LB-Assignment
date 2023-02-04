#include<stdio.h>
#include<stdbool.h>

int  CountChar(char *str, char ch)
{
    int iCnt = 0,ret = 0;

    while(*str != '\0')
    {
        
        if(*str == ch)
        {
            ret = iCnt;
            
        }
        str++;   
        iCnt++;
    }
    printf("%d",ret);
    
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s",arr);

    printf("Enter character \n");
    scanf(" %c",&cValue);

    CountChar(arr, cValue);
    
    //printf("Character frequency is %d",iRet);

    return 0;
}