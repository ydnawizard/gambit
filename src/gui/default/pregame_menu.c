char* pregame_menu_options[6]={"󰘹 Deck: "," Timer: ","󰒟 Shuffle: ","󰕇 Repeat: "," Orientation: ","█  󰫱󰫲󰫮󰫹  █"};


void pregame_menu(menu* menu_pointer,game_settings* game_settings_pointer)
{
	int loop_state=1,
	    highlight=0,
	    key,
	    x_max,
	    y_max;
	getmaxyx(stdscr,y_max,x_max);
	WINDOW* title_window = newwin(title_window_y,title_window_x,.1*y_max,.333*x_max);
	WINDOW* menu_window = newwin(menu_window_y,menu_window_x,.35*y_max,.333*x_max);
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
							if(highlight == 0)
							{
								wclear(menu_window);
								wclear(title_window);
								(*menu_pointer).state=11;
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
			(*menu_pointer).banner_text=oscillate((*menu_pointer).banner_text,(*menu_pointer).banner);
			wattron(title_window,COLOR_PAIR(1));
			mvwprintw(title_window,0,0,"%s\n",(*menu_pointer).banner_text);
			wattroff(title_window,COLOR_PAIR(1));
			wrefresh(title_window);
			for(int i=0;i<6;i++)
			{
				if(i==highlight)
				{
					wattron(menu_window,A_REVERSE);
					wattron(menu_window,COLOR_PAIR(1));
				}
				mvwprintw(menu_window,i+1,0,pregame_menu_options[i]);
				wattroff(menu_window,A_REVERSE);
				wattroff(menu_window,COLOR_PAIR(1));
				wrefresh(menu_window);
			}
			loop_state=1;
		}
		loop_state+=1;
	}

}

