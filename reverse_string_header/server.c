#include <stdio.h>
#include "server.h"
#include <string.h>

void str_rev(char *str, char *rev)
{
    int len = strlen(str), i = 0,j=len-1;
    while (j >= 0 && i<len)
    {
        *(rev + j) = *(str + i);
        i++, j--;
    }
}

int str_eql(char *str1, char *str2)
{
    int flag = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (*(str1 + i) != *(str2 + i))
        {
            flag++;
        }
    }
    if(flag==0) return 1;
    else return 0;
}
