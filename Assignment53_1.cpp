#include<iostream>
using namespace std;

void Display()
{
    static int i = 0;

    if(i < 5)
    {
        printf("*\t");
        i++;
        Display();
    }

}

int main()
{
    Display();

    return 0;
}