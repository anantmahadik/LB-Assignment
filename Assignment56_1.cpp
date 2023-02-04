#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{
    static int iCnt = 0;
    static char ch = '\0';
    if(*str>'\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        WhiteSpace(str);
    }
    else
    {
        return iCnt;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string :  ");
    scanf(" %[^'\n']s",arr);

    iRet = WhiteSpace(arr);
    printf("Output is : %d",iRet);

    return 0;
}