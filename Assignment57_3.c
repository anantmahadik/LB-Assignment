#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0,Length = 0;
    char Data[100];

    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    read(fd,Data,19);

    printf("Data from file is %s ",Data);

    return 0;

}