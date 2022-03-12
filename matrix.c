#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "cross-platform.h" // адаптация приложения под windows и unix

void delay (unsigned int msecs) { // функция задержки
    clock_t goal = msecs * CLOCKS_PER_SEC / 1000 + clock(); // конвертировать msecs в счетчик часов
    while ( goal > clock() ); // Цикл, пока не закончиться
}



int main(int argc, char const *argv[])
{
    /*  Получить размер окна консоли
        Создать массив из набора символов.
        Вывести на экран массив.
        В случайном порядке менять значения массива.
        Как-то поменять цвет на зеленый.
        Циклично выводить этот набор символов */
    
    struct winsize size;
    int fd = 0;
    int rc = ioctl(fd, TIOCGWINSZ, &size);

    if (rc < 0) {
        printf("Error!");
        exit(-1);
    }
    //printf("\033[32m ");
    //clear_screen(); // отчищаем экран

    int col = 15; //size.ws_col/2;
    int row = 15; //size.ws_row;

    char matrix[col][row]; // массив
    memset(&matrix[0][0], 0, sizeof(matrix));
    
    /*  Выбрать случайный пустой стобец i 
        Заполнить 4-мя символами. 
        Выбрать следующий случайный пустой столбец
        Снова заполнить
    */

    for (int i = 0; i < row; i++) { // заполняем массив
        for (int j = 0; j < col; j = j + 3) { // каждый 3й символ в строке
            matrix[i][j] = malloc(sizeof(char));
            sprintf(&matrix[i][j], "%d", rand()%10);
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
