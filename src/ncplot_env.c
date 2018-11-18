#include "ncplot.h"

void init_plotenv()
{
	initscr();
	noecho();
	curs_set(0);

	// Save max y and x screen values
	getmaxyx(stdscr, stdscr_y, stdscr_x);

//  Main window, acts like a general background.
	main_win = newwin(stdscr_y, stdscr_x, 0, 0); refresh();
	wborder(main_win, 0,0, 0,0, 0,0,0,0);
	getmaxyx(main_win, max_y, max_x);
}

void end_plotenv()
{
    endwin();
}
