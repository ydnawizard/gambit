#include "src/main.h"

int main()
{
	setlocale(LC_ALL,"en_US.UTF-8");
	SCREEN* s = newterm(NULL,stdin,stdout);
	noecho();
	cbreak();
	start_color();
	curs_set(0);
	keypad(stdscr,TRUE);
	//TERMITEX
	unsigned char** text;
	unsigned char* spelled;
	struct banner banner1={"GAMBZTYY","graffiti","default","oscillate"};
	text=style(&banner1);
	//TERMITEX
	//init menu state
	mnu menu;
	menu.state=1;
	menu.banner=&banner1;
	menu.banner_text=spell(text,&banner1);
	//init game settings
	game_set game_settings;
	//menu loop:
	while(menu.state > 0)
	{
		if(menu.state == 1)
		{
			main_menu(&menu);
		}
		else if(menu.state == 11)
		{
		//	pregame_menu.c(&menu,&game_settings);
		}
	}
	endwin();
}
