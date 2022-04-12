#include <stdio.h>
#include <string.h>
#include <unistd.h>

int correct_auth(char login[], char password[]); // прототип функции проверки логина и пароля

int main(int argc, char const *argv[]) {
    char login[6]; // Сюда принимаем Логин от пользователя.
    char password[6]; // Сюда принимаем пароль от пользователя.

    for (int i = 0; i < 5; i++) { // программа выполняеться пока счетчик попыток не достигнет 5,
        if (i == 3) { // если кол-во попыток достигнет 3х, то...
            printf("\nWaiting 3 secs ...");
            sleep(3); // устанавливаем задержку 3 сек.
        }
        
        printf("\nEnter login: ");
        scanf("%s", login); // Вводим логин.

        printf("Enter password: ");
        scanf("%s", password); // Вводим пароль.
        
        if (correct_auth(login, password) == 0) { // Если наша функция вернет успех выполнения, то
            printf("Welcome ADMIN!\n"); // сообщаем об успехе, и ...
            break;
        } else { // В противном случае
            printf("User with such credentials was not found\n"); // сообщаем об ошибке, и
        }
    }
    printf("Exit 0\n"); // Сообщаем о завершении программы
    return 0;
}

int correct_auth(char login[], char password[]) {
    char username[] = "test0"; // Логин по умолчанию.
    char userpassword[] = "test0"; // Пароль по умолчанию.

    if (strcmp(username, login) == 0 && 
        strcmp(userpassword, password) == 0) { // Если логин и пароль совпадут,
        return 0; // возвращаем 0.
    }
}