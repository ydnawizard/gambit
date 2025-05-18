//GLOBAL
const int title_window_x = 100,
    title_window_y = 12,
    menu_window_x = 50,
    menu_window_y = 50;

//Standard Library
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
#include <locale.h>
#include <wchar.h>

//Ncurses
#include <ncurses.h>
#include <curses.h>

//Termitex
#include "gui/termitex/termitex3.c"
#include "gui/termitex/termitex.c"

//Objects
#include "structs/card_struct.c"
#include "structs/deck_struct.c"
#include "structs/timer_struct.c"
#include "structs/game_settings_struct.c"
#include "structs/menu_struct.c"
#include "structs/game_struct.c"

//Misc
#include "misc/input_no_wait.c"

//Read File
#include "read/read_txt.c"
#include "read/read_directory.c"


//GUI
#include "gui/default/main_menu.c"
#include "gui/default/pregame_menu.c"
