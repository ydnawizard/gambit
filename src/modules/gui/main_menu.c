char* mainMenu[6]={"Deal","Profiles","Client Settings","Performance",
	"Info","Quit"};

void main_menu()
{
	int loop_state=1,
	    y_max,
	    x_max,
	    key,
	    highlight=0;
	getmaxyx(stdscr,y_max,x_max);
	unsigned char** text;
	unsigned char* spelled;
	struct banner banner1={"GAMBZTYY","graffiti","default","oscillate"};
	text=style(&banner1);
	spelled=spell(text,&banner1);
	WINDOW* title_window=newwin(15,100,.1*y_max,.333*x_max);
	WINDOW* menu_window=newwin(50,20,.35*y_max,.333*x_max);
	mvwprintw(title_window,1,1,"%s\n",spelled);
	wrefresh(title_window);
	while(loop_state == 1)
	{
		wclear(title_window);
		spelled=oscillate(spelled,&banner1);
		mvwprintw(title_window,0,0,"%s\n",spelled);
		wrefresh(title_window);
		usleep(25000);
	}

}

