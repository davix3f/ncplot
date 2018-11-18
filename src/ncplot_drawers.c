#include "ncplot.h"

void draw_axes()
{
	// draw y axis
	for(int y_indx=1; y_indx<max_y-1; y_indx++)
	{
		mvwprintw(main_win, y_indx, max_x/2,
				 (y_indx>(max_y/2) ? "-" : "+" ) ); 
	}

	// draw x axis
	for(int x_indx=1; x_indx<max_x-1; x_indx++)
	{
		if(x_indx==max_x/2)
		{ mvwprintw(main_win, max_y/2, x_indx, "0"); }
		else
		{ mvwprintw(main_win, max_y/2, x_indx, 
				   (x_indx<(max_x/2) ? "-" : "+" ) ); }
	}

	wrefresh(main_win);
}

void draw_point(int point_x, int point_y)
{
	if(point_x<max_x && point_y<max_y)
	{
		// Print and 'o' at the given coordinates
		mvwprintw(main_win, (max_y/2)-point_y, (max_x/2)+point_x, "o");

		/*
		Print - for on x axis and | for y axis 
		to 'trace' the point, like that
		
	   y|
		|--o
		|__|___x   */
		
		for(int x=(max_x/2);
			point_x > 0 ? x<(max_x/2)+point_x : x>(max_x/2)+point_x;
			// if x>0 while(x<point_x){x++} else while(x>point_x){x--}
			point_x > 0 ? x++ : x--)
		{
			mvwprintw(main_win, (max_y/2)-point_y, x, "-");
		}

		for(int y= point_y > 0 ? (max_y/2)-1 : (max_y/2) ;
			point_y > 0 ?  y>(max_y/2)-point_y : y<(max_y/2)-point_y;
			// if y>0 while(y>point_y){y--} else while(y<point_y){y++}
			point_y > 0 ? y-- : y++)
		{
			mvwprintw(main_win, y, (max_x/2)+point_x, "|");
		}

		// Print point coordinates in absolute form on the relative axis
		mvwprintw(main_win, (max_y/2)-point_y, max_x/2, "%i", abs(point_y)); // y
		mvwprintw(main_win, max_y/2, (max_x/2)+point_x, "%i", abs(point_x)); // x

		wrefresh(main_win);
	}
}

void draw_point_set(coord_pair* target_pair, int size)
{
	for(int indx=0; indx<size; indx++)
	{
		draw_point(target_pair[indx].point_x, target_pair[indx].point_y);
	}
}