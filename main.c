#include <stdio.h>

int main(int argc, char const *argv[]) {
    int costNight = 1; // 00:00 - 08:00
    int costDay = 2; // 08:00 - 16:00
    int costEvening = 3; // 16:00 - 00:00

    int power; // Сюда получаем значение затраченной электноэнергии
    int hours; // Сюда получаем время в часах
    int result; // Здесь будет храниться результат

    // Получаем объем затраченной электноэнергии
    printf("Enter used power: ");
    scanf("%d", &power);

    // Получаем время в часах
    printf("Enter finished time (hours): ");
    scanf("%d", &hours);

    /* Время указываеться в 24-ом формате. 
        24 часа всегда равняются нулю. 
        время не может превысить 24 часа */
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