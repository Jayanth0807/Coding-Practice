#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i, j;
    printf("Enter the Number to be shifted: ");
    scanf("%d", &a);
    printf("Enter the bit positions: ");
    scanf("%d , %d", &i, &j);
    if ((a & (1 << i)) != (a & (1 << j)))
    {
        a = a ^ (1 << i);
        a = a ^ (1 << j);
    }
    printf("value after shifting is %d", a);
    return 0;
}