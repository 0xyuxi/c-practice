#include <stdio.h>
int main(void)
{
    int day;
    scanf("%d", &day);
    printf("That day is");
    switch (day % 7)
    {
    case 1:
        printf(" Wednesday\n");
        break;
    case 2:
        printf(" Thursday\n");
        break;
    case 3:
        printf(" Friday\n");
        break;
    case 4:
        printf(" Saturday\n");
        break;
    case 5:
        printf(" Sunday\n");
        break;
    case 6:
        printf(" Monday\n");
        break;
    case 0:
        printf(" Tuesday\n");
        break;
    default:
        printf(" Wednesday\n");
        break;
    }
    return 0;
}