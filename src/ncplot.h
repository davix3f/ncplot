#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

// Custom types
typedef struct _coord_pair
{
    int point_x;
    int point_y;
} coord_pair;

// Useful variables
WINDOW* main_win;
int max_x, max_y;
int stdscr_y, stdscr_x;

// Environment setters
void init_plotenv();
void end_plotenv();

// Drawing functions
void draw_axes();
void draw_point(int point_x, int point_y);
void draw_point_set(coord_pair* target_pair, int size);

// Dialogs
const char* new_input_dialog();