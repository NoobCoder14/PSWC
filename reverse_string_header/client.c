#include <stdio.h>
#include "server.h"
#include <string.h>

void main()
{
    char *str1 = "12344321";
    char *str2;
    str_rev(str1, str2);
    if (str_eql(str1, str2))
    {
        printf("Palindrome");
    }
}