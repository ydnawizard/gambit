//Standard Library
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

//Ncurses
#include <ncurses.h>
#include <curses.h>

#include "modules/gui/termitex/termitex3.c"
#include "modules/gui/termitex/termitex.c"

//Objects
#include "objects/card_object.c"
#include "objects/deck_object.c"
#include "objects/timer_object.c"
#include "objects/profile_object.c"
#include "objects/menu_object.c"
#include "objects/game_object.c"

//Read File
#include "read/read_txt.c"
#include "read/read_directory.c"

//GUI
#include "modules/gui/main_menu.c"
