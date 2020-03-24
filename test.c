#include<stdio.h>

int main(){
    char a[100];
    scanf("%[^EOF]",a);
    printf("%s",a);
    return 0;
}