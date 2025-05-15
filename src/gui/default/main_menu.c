char* main_menu_options[6]={"Play 󰋇","Presets","Client Settings","Performance",
	"Info","Quit"};

void main_menu(mnu* menu)
{
	//INIT\\
	//VARS
	int loop_state=1,
	    y_max,
	    x_max,
	    key,
	    highlight=0;
	getmaxyx(stdscr,y_max,x_max);
	//CURSES
	WINDOW* title_window=newwin(title_window_y,title_window_x,.1*y_max,.333*x_max);
	WINDOW* menu_window=newwin(menu_window_x,menu_window_y,.35*y_max,.333*x_max);
	mvwprintw(title_window,0,0,"%ls\n",(*menu).banner_text);
	wrefresh(title_window);
	keypad(menu_window,true);
	nodelay(stdscr,TRUE);
	init_pair(1,COLOR_RED,COLOR_BLACK);
	//CURSES
	while(loop_state > 0)
	{
		//Shitty counter will change later once timer implemented
		if(loop_state > 50000000)
		{
			//Key handling
			if(kbhit())
			{
				key=wgetch(menu_window);
				switch(key)
				{
					case KEY_UP:
					case 'k':
						if(highlight == 0)
						{
							break;
						}
						else
						{
							highlight--;
							break;
						}
					case KEY_DOWN:
					case 'j':
						if(highlight == 5)
						{
							break;
						}
						else
						{
							highlight++;
							break;
						}
					case KEY_RIGHT:
					case 'l':
						{
							if(highlight == 1)
							{
								wclear(menu_window);
								wclear(title_window);
								(*menu).state=11;
							}
						}
					case 'q':
						{
							exit(0);
						}
				}
			}
			//Re-draw Screen
			wclear(title_window);
			(*menu).banner_text=oscillate((*menu).banner_text,(*menu).banner);
			wattron(title_window,COLOR_PAIR(1));
			mvwprintw(title_window,0,0,"%s\n",(*menu).banner_text);
			wattroff(title_window,COLOR_PAIR(1));
			wrefresh(title_window);
			for(int i=0;i<6;i++)
			{
				if(i==highlight)
				{
					wattron(menu_window,A_REVERSE);
					wattron(menu_window,COLOR_PAIR(1));
				}
				mvwprintw(menu_window,i+1,0,main_menu_options[i]);
				wattroff(menu_window,A_REVERSE);
				wattroff(menu_window,COLOR_PAIR(1));
				wrefresh(menu_window);
			}
			loop_state=1;
		}
		loop_state+=1;
	}

}

