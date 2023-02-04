#include<iostream>
using namespace std;

void Display()
{
    static char ch = 'A';
    static int i = 0;
    if(i <= 5)
    {
        printf("%c\t",ch);
        ch++;
        i++;
        Display();
    }

}

int main()
{
    Display();

    return 0;
}