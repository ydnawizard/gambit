char* pregame_menu_options[6]={"󰘹 Deck: "," Timer: ","󰒟 Shuffle: ","󰕇 Repeat: "," Orientation: ","DEAL 󰋇"};


void pregame_menu(mnu* menu,game_set* game_settings)
{
	int x_max,y_max;
	getmaxyx(stdscr,y_max,x_max);
	WINDOW* title_window = newwin(title_window_y,title_window_x,.1*y_max,.333*x_max);
	WINDOW* menu_window = newwin(menu_window_y,menu_window_x,.35*y_max,.333*x_max);
}
