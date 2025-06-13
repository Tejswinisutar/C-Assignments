#include <stdio.h>

int main()
{
    char ch;

    for (ch = 'W'; ch >= 'E'; ch--)
    {
        printf("%c ", ch);
    }

    printf("\n");
    return 0;
}
