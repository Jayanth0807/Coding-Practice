#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 1;
    char *p;
    p = (char *)&n;
    if (*p == 1)
    {
        printf("the system is little indian");
    }
}