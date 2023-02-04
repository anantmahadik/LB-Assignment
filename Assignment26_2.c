#include<stdio.h>
#include<ctype.h>

void strwrx(char *str)
{
    char result[20];

    for(int i = 0; str[i] != '\0'; i++)
    {
        result[i] = toupper(str[i]);
    }
    printf("Modified string is %s",result); 
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
   
    strwrx(arr);

    

    return 0;
}