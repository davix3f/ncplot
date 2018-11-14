#include "ncplot.h"

void draw_axes()
{
	int max_x, max_y;
	for(int y_indx=1; y_indx<max_y-1; y_indx++)
	{
		mvwprintw(main_win, y_indx, max_x/2, "+"); 
	}

	for(int x_indx=1; x_indx<max_x-1; x_indx++)
	{
		if(x_indx==max_x/2)
		{ mvwprintw(main_win, max_y/2, x_indx, "0"); }
		else
		{ mvwprintw(main_win, max_y/2, x_indx, "+"); }
	}

	wrefresh(main_win);
}

void draw_point(int point_x, int point_y)
{
	if(point_x<max_x && point_y<max_y)
	{
		mvwprintw(main_win, (max_y/2)-point_y, (max_x/2)+point_x, "o");
		mvwprintw(main_win, (max_y/2)-point_y, max_x/2, "%i", point_y);
		mvwprintw(main_win, max_y/2, (max_x/2)+point_x, "%i", point_x);
		wrefresh(main_win);
	}
}

