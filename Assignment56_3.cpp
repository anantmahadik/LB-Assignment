#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int iCnt = 0;
    static char ch = '\0';
    if(*str>'\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        Strlen(str);
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
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("Output is : %d",iRet);

    return 0;
}