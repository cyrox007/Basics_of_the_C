#ifdef _WIN32
#include <windows.h>
#else
#include <sys/ioctl.h>
#include <termios.h>
#endif

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}