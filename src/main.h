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
#include "objects/card_object.c"
#include "objects/deck_object.c"
#include "objects/timer_object.c"
#include "objects/game_settings_object.c"
#include "objects/menu_object.c"
#include "objects/game_object.c"

//Misc
#include "misc/input_no_wait.c"

//Read File
#include "read/read_txt.c"
#include "read/read_directory.c"


//GUI
#include "gui/default/main_menu.c"
#include "gui/default/pregame_menu.c"
