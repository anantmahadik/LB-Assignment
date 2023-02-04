#include<stdio.h>
#include<stdbool.h>

int CountCapital(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int iSub = 0;
    int i = 0;
    int j = 0;

    if(str == '\0')
    {
        return  iCnt1;
    }   

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt2++;
        }
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt1++;
        }
        str++;
    }
    
    iSub = iCnt1 - iCnt2;
    return iSub;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
   
    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}