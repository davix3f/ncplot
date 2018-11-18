#include <stdio.h>
#include "ncplot.h"

int main()
{

	init_plotenv();
	draw_axes();

	draw_point(-10, -10);
	draw_point(10, -10);

	coord_pair pairs[] = { {0, 9},
						   {8, 6},
						   {5, 14} };
	draw_point_set(pairs, 3);

	getch();
	end_plotenv();
}
