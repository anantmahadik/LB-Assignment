#include<stdio.h>
#include<ctype.h>

void DisplayDigit(char *str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c\t",str[i]); 
        }
    }
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);
   
    DisplayDigit(arr);

    return 0;
}