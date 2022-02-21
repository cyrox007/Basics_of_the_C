#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x; // Здесь будем хранить килограммы
    int cost = 5;
    float sale = 20;
    
    printf("Enter the weight: \n");
    scanf("%d", &x);

    int res = x * cost - ((x * cost) * (sale / 100));

    printf("Result: %d Euro \n", res);

    return 0;
}
