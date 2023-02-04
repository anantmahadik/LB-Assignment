#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
    if(ch == 'a' || ch <= 'A')
    {
        printf("Your exam at 7 AM \n");
    }

    else if(ch == 'b' || ch <= 'B')
    {
        printf("Your exam at 8:30 AM \n");
    }
    
    else if(ch == 'c' || ch <= 'C')
    {
        printf("Your exam at 9:20 AM \n");
    }
    
    else if(ch == 'd' || ch <= 'D')
    {
        printf("Your exam at 10:30 AM \n");
    }

    else
    {
        printf("Enter wrong division \n");
    }

}

int main()
{
    char cValue = '\0';
    
    printf("Enter character :\n ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}