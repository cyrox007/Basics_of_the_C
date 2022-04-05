#include <stdio.h>

int main(int argc, char const *argv[])
{
    float cost = 0.20f;
    int electr = 150;

    float res = cost * (float)electr;
    printf("Result: $%2.f", res);

    return 0;
}
