#include <stdio.h>

int main(int argc, char const *argv[]) {
    int costNight = 1; // 00:00 - 08:00
    int costDay = 2; // 08:00 - 16:00
    int costEvening = 3; // 16:00 - 00:00

    int power; // Сюда получаем объем затраченной электроэнергии
    int hours; // Сюда получаем время в часах
    int result; // Здесь будет храниться результат

    // Получаем объем электроэнергии
    printf("Enter used power: ");
    scanf("%d", &power);

    // Получаем время
    printf("Enter finished time (hours): ");
    scanf("%d", &hours);

    /* Время приводиться в 24-х часовом формате.
        Значение времени мы получаем в часах. 
        24-й час всегда будет равняеться нулю. 
        Время никогда не превышает 24 часа */
    if (hours >= 0 && hours < 8) {
        result = power * costNight;
    } else if (hours >= 8 && hours < 16) {
        result = power * costDay;
    } else if (hours >= 16 && hours < 24) {
        result = power * costEvening;
    } else {
        printf("The time is specified incorrectly");
        return 0;
    }
    
    printf("Total price: $%d", result);
    return 0;
}