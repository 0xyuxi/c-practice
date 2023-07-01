#include <stdio.h>
int main(void)
{
    int  i, j, t;
    char a[15], b[15];
    for (i = 0; i < 15; i++)
    {
        scanf(" %c", &a[i]);
    }
    for (j = 0; j < 15; j++)
    {
        t = a[i - (j+1)];
        b[j] = t;
        printf(" %c", b[j]);
    }
    return 0;
}