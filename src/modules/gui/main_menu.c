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
	WINDOW* title_window=newwin(12,100,.1*y_max,.333*x_max);
	WINDOW* menu_window=newwin(50,50,.35*y_max,.333*x_max);
	mvwprintw(title_window,0,0,"%s\n",spelled);
	wrefresh(title_window);
	keypad(menu_window,true);
	nodelay(stdscr,TRUE);
	while(loop_state > 0)
	{
		if(loop_state > 50000000)
		{
			if(kbhit())
			{
				key=wgetch(menu_window);
				switch(key)
				{
					case KEY_UP:
						if(highlight==0)
						{
							break;
						}
						else
						{
							highlight--;
							break;
						}
					case KEY_DOWN:
						if(highlight==5)
						{
							break;
						}
						else
						{
							highlight++;
							break;
						}
				}
			}
			wclear(title_window);
			spelled=oscillate(spelled,&banner1);
			mvwprintw(title_window,0,0,"%s\n",spelled);
			for(int i=0;i<6;i++)
			{
				if(i==highlight)
				{
					wattron(menu_window,A_REVERSE);
				}
				mvwprintw(menu_window,i+1,25,mainMenu[i]);
				wattroff(menu_window,A_REVERSE);
				wrefresh(menu_window);
			}
			wrefresh(title_window);
			loop_state=1;
		}
		loop_state+=1;
	}

}

