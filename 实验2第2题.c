#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d", &x);
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}
