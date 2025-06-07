#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr1[100] = "" , cStr2[100] = "";
    int i = 0 , j = 0, k = 0, spt = 0 , length = 0 , lpt = 0 , cnt = 0;

    printf("\nEnter A String : ");
    gets(cStr1);

    length = strlen(cStr1);

    cStr1[length]=' ';

    while(cStr1[i] != '\0')
    {
       if(cStr1[i] == ' ')
       {
           lpt = i-1;
           while(spt <= lpt)
           {
               lpt--;
               cnt++;
           }

           k = i-1;
           if(cnt % 2 == 0)
           {
               while(k >= spt)
               {
                   cStr2[j] = cStr1[k];
                   j++;
                   k--;
               }
           }
            else
            {
                while(spt <= k)
                {
                    cStr2[j] = cStr1[spt];
                    j++;
                    spt++;
                }
            }

           cStr2[j]= ' ';
           j++;
           spt = j;
           cnt = 0;
       }
       ++i;
    }
    printf("\n\nThe Original String Is -->\n\n\n\t\t %s",cStr1);
    printf("\n\nAfter Reversing Even Word In The String Is -->\n\n\n\t\t %s",cStr2);

    getch();
    return 0;
}
