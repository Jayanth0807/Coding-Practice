#include <stdio.h>
#include <stdlib.h>
#define pragma pack(1)
typedef struct struct_a
{
    char c;
    short int i;
} sa;

typedef struct struct_b
{
    char a;
    short int f;
    int g;
} sb;

typedef struct struct_c
{
    int s;
    double g;
    char c;
} sc;

void my_fun(char c1, char c2)
{
    printf("to check the stack %d\n", (int *)&c2 - (int *)&c1);
}

int main()
{
    printf("%ld\n", sizeof(sa));
    printf("%ld\n", sizeof(sb));
    printf("%ld\n", sizeof(sc));
    return 0;
}