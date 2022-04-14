# My homework on the basics of C
## Short description
* Lesson 1:
* * main.c - The task of calculating electricity
* * main-2.c - Tasks for calculating the discount
* Lesson 2: 
* * main.c - The task of calculating the cost of electricity depending on the time of day
* Lesson 3: 
* * run.c - Simple authorization program
* * matrix-for-linux.c
* * matrix-for-windows.c
* Lesson 4: 
* * draw.c - The program that displays the image on the screen, by the launch key
## General instructions for starting
To run the program, you first need to get a compiler. To install, run the terminal and run the following command:
```bash
$ sudo apt install build-essential
```
The following command will allow us to make sure that the compiler is installed:
```bash
$ gcc -v
```
If you have received an uncompiled version of the program and are going to compile it yourself from the source code, then you need to do the following:
1. In the terminal, go to the directory with the program;
2. Start the compilation process using the command:
```bash
$ gcc –o main.bin main.c
```
3. Run the program with the command:
```bash
$ ./main.bin
```