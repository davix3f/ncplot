#include <stdio.h>
#include <curses.h>

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
