#include <stdio.h>
#include <stdlib.h>
#include "server.h"

void main()
{
    Date D1;
    Date D2;
    printf("Enter Date 1:\n");
    scanf("%d/%d/%d", &D1.dd, &D1.mm, &D1.yyyy);
    printf("Enter Date 2:\n");
    scanf("%d/%d/%d", &D2.dd, &D2.mm, &D2.yyyy);
    int res = compare(D1, D2);
    if (res == 1)
        printf("D1 is higher\n");
    else if (res == 2)
        printf("D2 is higher\n");
    else if (res == 0)
        printf("D1 is equal to D2\n");
}