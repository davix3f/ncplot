#include "ncplot.h"

void init_plotenv()
{
	initscr();
	noecho();
	curs_set(0);

	int stdscr_y, stdscr_x;
	getmaxyx(stdscr, stdscr_y, stdscr_x);

//  Main window, acts like a background.
	main_win = newwin(stdscr_y, stdscr_x, 0, 0); refresh();
	wborder(main_win, 0,0, 0,0, 0,0,0,0);
}

void end_plotenv()
{
    endwin();
}
