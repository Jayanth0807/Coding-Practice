#include <stdio.h>
#include <stdlib.h>

struct struct_p
{
    struct child_p
    {
        int i;
    } child;
    int x;
    int y;
};

struct struct_p p1 = {15};
// struct struct_p p1

int main()
{
    // printf("%d\n", p1.x);
    printf("%d\n", p1.child.i);
    return 0;
}
