#include <stdio.h>
#include <curses.h>

static WINDOW* main_win;

void init_plotenv();
void end_plotenv();

void draw_axes();
void draw_point(int point_x, int point_y);
