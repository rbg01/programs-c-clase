#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


int main(int argc, const char **argv){

    int ch;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();

    printw ("Escribe algún carácter para verlo en negrita\n");
    ch = getch();

    if (ch == KEY_F(1))
	printw ("Tecla F1 pulsada\n");
    else {
	printw ("La tecla presionada es ");
	attron(A_BOLD);
	printw("%c", ch);
	attroff(A_BOLD);
    }

    refresh();
    getch();
    endwin();
return EXIT_SUCCESS;
}
