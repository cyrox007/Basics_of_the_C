#include <stdio.h>
#include <Windows.h>
#include <time.h>

void delay (unsigned int msecs) { // функция задержки
    clock_t goal = msecs * CLOCKS_PER_SEC / 1000 + clock(); // конвертировать msecs в счетчик часов
    while ( goal > clock() ); // Цикл, пока не закончиться
}

CONSOLE_SCREEN_BUFFER_INFO csbiData;

int main(int argc, char const *argv[])
{
    DWORD dwWidht, dwHeightWnd, dwHeightBuf, dwErrCode;
    CHAR* szSysMsg = NULL; //LPTSTR lpszSysMsg = NULL;
    BOOL bRet;
    HANDLE hWndCon = GetStdHandle(STD_OUTPUT_HANDLE);
    if (FALSE != hWndCon)GetConsoleScreenBufferInfo(hWndCon, &csbiData);
 
    dwWidht = csbiData.dwSize.X; // Ширина буфера / окна
    dwHeightBuf = csbiData.dwSize.Y; // Высота буфера
    dwHeightWnd = csbiData.srWindow.Bottom + 1; // Высота окна
    int col = dwHeightWnd;
    int row = dwWidht;

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

        