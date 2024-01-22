#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc>1)
    {
        int i=1;
        while(i<argc)
        {
            int fd = open(argv[i], O_RDONLY);
            if(fd==-1)
            {
                perror("provide a different file");
                return 0;
            }
            char* buf=(char*)malloc(2048);
            int s=read(fd,buf,2048);
            write(1,buf,s);
            close(fd);
            i++;
        }
    }
    else
    {
        while(1==1){
            char* buf=(char*)malloc(2048);
            int s=read(0,buf,2048);
            write(1,buf,s);
        }
    }
    return 0;
}