#include "src/main.h"


int main()
{
	txt deck;
	SCREEN* s = newterm(NULL,stdin,stdout);
	noecho();
	cbreak();
	curs_set(0);
	keypad(stdscr,TRUE);
	main_menu();
	endwin();
}
