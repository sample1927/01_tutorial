#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[256] = Hello World!!;
    fgets(str, sizeof(str), stdin);
    printf("%s\n", "XXXXX");

    return 0;
}
