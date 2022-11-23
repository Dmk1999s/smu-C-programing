#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char str[232];
    int i;
    printf("Input> ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    fputs("Output> ", stdout);
    fputs(str, stdout);
    return 0;
}