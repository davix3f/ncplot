#include <stdio.h>
#include <curses.h>

// Useful variables
static WINDOW* main_win;

// Environment setters
void init_plotenv();
void end_plotenv();

// Drawing functions
void draw_axes();
void draw_point(int point_x, int point_y);
