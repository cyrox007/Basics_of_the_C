#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "cross-platform.h"

void delay (unsigned int msecs) {
    clock_t goal = msecs*CLOCKS_PER_SEC/1000 + clock();  //конвертировать msecs в счетчик часов
    while ( goal > clock() );               // Цикл, пока не закончиться
}

int screen_size() {
    
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
       
    clear_screen();

    int col = size.ws_col/2;
    int row = size.ws_row;

    char matrix[col][row]; // типо массив
    memset(matrix, "0", 10);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j = j+1) {
            matrix[i][j] = rand()%10;
        }
    }

    for (int i = 1; i < row; i++) {
        for (int j = 0; j < col; j++) {
            
            printf("\033[32m %d", matrix[i][j]);
        }
        printf("\n");
        delay(200);
    }
    return 0;
}
