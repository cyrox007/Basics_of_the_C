#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cost = 0.20f;
    int electr = 150;

    int res = cost * electr;
    printf("Result: $%d", res);

    return 0;
}
