#include<stdio.h>
#include<stdbool.h>

void DisplayASCII()
{
    char ch = '\0';
    int i = 0;
    printf("Dec\t Hex \t char \n");
    for(i = 0; i <= 255; i++)
    {
        
        printf("%d\t %hx \t %c \t\n",ch,ch,ch);
        ch++;
    }

}

int main()
{
    
    DisplayASCII();

    return 0;
}