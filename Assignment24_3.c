#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        do
        {
            printf("%c\t",ch);
            ch++;
        }while(ch != 'Z');  
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        do
        {
            printf("%c\t",ch);
            ch--;
        }while(ch != 'a');
    }
}

int main()
{
    char iValue = '\0';
    
    printf("Enter character :\n ");
    scanf("%c",&iValue);

    Display(iValue);

 
    return 0;
}