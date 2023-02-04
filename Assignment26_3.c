#include<stdio.h>
#include<ctype.h>

void strwrx(char *str)
{
    char result[20];

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Toggeled string is %s",str); 
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