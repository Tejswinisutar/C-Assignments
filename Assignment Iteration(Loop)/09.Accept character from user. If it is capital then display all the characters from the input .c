#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;

    printf("Enter A character :");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        for (; ch <= 'Z'; ch++)
        {
            printf("%c ", ch);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (; ch >= 'a'; ch--;)
        {
            printf("%c ", ch);
        }
    }
    else
    {
        return 0;
    }

    return 0;
}
