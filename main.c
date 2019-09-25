#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[37564];
    fgets(str, sizeof(str), stdin);
    printf("%s\n", "XXXXX");

    return 0;
}
