#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0,Length = 0;
    char Data[100];
    int Size = 0;

    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    printf("Enter the data that you want to write in file : \n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    write(fd,Data,Length);
    
    return 0;

}