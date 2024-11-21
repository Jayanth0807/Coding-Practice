#include <stdio.h>
#include <stdlib.h>

struct bit
{
    unsigned int a : 5;
    unsigned int b : 7;
};

struct bit acess;

int main()
{
    int c;
    acess.a = 4;
    acess.b = 6;
    c = acess.a + acess.b;
    printf("%d\n", c);
    return 0;
}