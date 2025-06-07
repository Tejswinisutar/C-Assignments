// Count Capital Letters  in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] ={'\0'};
    int i = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
       if(cSrc[i] >= 'A' && cSrc[i] <= 'Z')
        {
            cSrc[i] = cSrc[i] -32;
        }
            i++;
    }

    printf("\n Count Of Capital Letters in Given String is = %d.", Cap_Cnt);

    getch();
    return 0;
}
