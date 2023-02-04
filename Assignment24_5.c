#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\t %d\n",ch);
    printf("Octal\t %o\n",ch);
    printf("Hexadecimal\t %hx\n",ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character :\n ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}