#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <termios.h>

int main(int argc, char const *argv[])
{  
    struct winsize size;
    int fd = 0;
    int rc = ioctl(fd, TIOCGWINSZ, &size);
    if (rc < 0) {
        printf("Error!");
        exit(-1);
    }
    int col = size.ws_col;
    int row = size.ws_row;
        
    printf("\033[32m ");
    system("clear"); // отчищаем экран

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
        usleep(200);
    }
    return 0;
}
