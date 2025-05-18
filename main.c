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
	menu menu_pointer;
	menu_pointer.state=1;
	menu_pointer.banner=&banner1;
	menu_pointer.banner_text=spell(text,&banner1);
	//init game settings
	game_settings game_settings_pointer;
	//menu loop:
	while(menu_pointer.state > 0)
	{
		if(menu_pointer.state == 1)
		{
			main_menu(&menu_pointer);
		}
		else if(menu_pointer.state == 11)
		{
			pregame_menu(&menu_pointer,&game_settings_pointer);
		}
	}
	endwin();
}
