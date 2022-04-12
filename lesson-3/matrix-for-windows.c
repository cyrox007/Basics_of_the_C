#include <stdio.h>
#include <windows.h>
#include <time.h>

void delay (unsigned int msecs) { // функция задержки
    clock_t goal = msecs * CLOCKS_PER_SEC / 1000 + clock(); // конвертировать msecs в счетчик часов
    while ( goal > clock() ); // Цикл, пока не закончиться
}

int main(int argc, char const *argv[])
{
    HANDLE hWinConsole;
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    int col = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
    int row = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;

    printf("\033[32m ");
    system("cls");

    char matrix[col][row]; // массив
    memset(&matrix[0][0], 0, sizeof(matrix));

    for (int i = 0; i < row; i++) { // заполняем массив
        for (int j = 0; j < col; j += 3) { // каждый 3й символ в строке
            int var = rand()%10;
            matrix[i][j] = malloc(sizeof(char));
            sprintf(&matrix[i][j], "%d", var);
        }
    }

    for (int i = 0; i < row; i++) { // выводим на экран содержимое
        for (int j = 0; j < col; j++) {
            if (strcmp("", &matrix[i][j]) == 0) {
                printf(" ");
            }
            printf("%c", matrix[i][j]);
        }
        printf("\n");
        delay(200);
    }

    return 0;
}

        