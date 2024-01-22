#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        perror("please provide 1 file");
        return 0;
    }
    int fd = open(argv[1], O_RDONLY);
    if(fd==-1)
    {
        perror("provide a different file");
        return 0;
    }
    char* buf=(char*)malloc(2048);
    int s=read(fd,buf,2048);
    write(1,buf,s);
    close(fd);
    return 0;
}