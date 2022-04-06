#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x; // Здесь будем хранить килограммы
    int cost = 5;
    float sale = 20.0f;
    
    printf("Enter the weight: \n");
    scanf("%d", &x);

    float res = x * cost - ((x * cost) * (sale / 100));

    printf("Result: %.f Euro \n", res);

    return 0;
}
