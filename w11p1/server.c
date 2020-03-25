#include <stdio.h>
#include "server.h"

int compare(Date d1, Date d2)
{
    int flag = 0;
    if (d1.yyyy > d2.yyyy)
        flag = 1;
    else if (d1.yyyy < d2.yyyy)
        flag = 2;
    else if (d1.yyyy == d2.yyyy)
    {
        if (d1.mm > d2.mm)
            flag = 1;
        else if (d1.mm < d2.mm)
            flag = 2;
        else if (d1.mm == d2.mm)
        {
            if (d1.dd > d2.dd)
                flag = 1;
            else if (d1.dd < d2.dd)
                flag = 2;
        }
    }
    return flag;
}