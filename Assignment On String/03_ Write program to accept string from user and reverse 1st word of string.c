
#include <stdio.h>
#include <conio.h>
void Reverse_First_Word(char *);

int main()
{
    char Str[100] = {'\0'};

    printf("\n Enter A String To Reverse First Word :");
    gets(Str);

    Reverse_First_Word(Str);

    printf("\n String After Reversing First Word : %s", Str);

    getch();
    return 0;
}

void Reverse_First_Word(char *Src)
{
    int i = 0, j= 0;
    char temp;
    while (Src[i] == ' ' || Src[i] == '\t')
    {
        i++;
    }
    j = i;
    while (Src[i] != ' ' && Src[i] != '\t' && Src[i] != '\0')
    {
        i++;
    }
    i--;
    while (j < i)
    {
        temp = Src[j];
        Src[j] = Src[i];
        Src[i] = temp;

        j++;
        i--;
    }
}

