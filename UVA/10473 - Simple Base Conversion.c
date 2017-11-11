#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    int num;

    while(scanf("%s", str), str[0] != '-') {
        if(strlen(str) > 2 && (str[1] == 'x' || str[1] == 'X')) {
            sscanf(str, "%x", &num);
            printf("%d\n", num);
        }
        else {
            sscanf(str, "%d", &num);
            printf("0x%X\n", num);
        }
    }
    return 0;
}
