#include <stdio.h>
#include <stdio.h>

int main()
{
        int n, i;
        int count = 0;
        printf("Enter the integer: ");
        scanf("%d", &n);
        for (i = 0; i < 32; i++)
        {
                if (n & (1 << i)!=0)
                        count++;
        }
        printf("The no of set bits are %d\n", count);
        return 0;
}
