#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
    char username[] = "test0"; // Логин по умолчанию.
    char userpassword[] = "test0"; // Пароль по умолчанию.

    char login[8]; // Сюда принимаем Логин от пользователя.
    char password[8]; // Сюда принимаем пароль от пользователя.

    int i = 0; // Создаем счетчик попыток,
    while (i < 5) { // программа выполняеться пока счетчик попыток не достигнет 5,
        printf("\nEnter login: ");
        scanf("%s", &login); // Вводим логин.

        printf("Enter password: ");
        scanf("%s", &password); // Вводим пароль.
        if (i < 3) {
            if (strcmp(username, login) == 0 && strcmp(userpassword, password) == 0) { // если логин и пароль совпадут,
                printf("Welcome ADMIN!"); // сообщаем об успехе, и ...
                i = 0; // обнуляем счетчик.
            } else { // Если не совпадет логин или пароль, то сообщим об ошибке.
                printf("User with such credentials was not found");
                i++; // Увеличим счетчик на единицу.
            }
        } else {
            printf("Waiting 3 secs ...");
            sleep(3);
        }
    }
    return 0;
}
