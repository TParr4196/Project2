#include<stdio.h>

int x = 12;
float y = 3.14;
char* s = "Hello, world!";

int main()
{
    printf("x is %d, y is %f\n",x,y);
    puts(s);
    int i = 0;
    while(i<5)
    {
        printf("%d x 5 = %d\n",i,i*5);
        i++;
    }
    return 0;
}