#include <stdio.h>
#include "ncplot.h"

int main()
{
	init_plotenv();
	draw_axes();
	draw_point(10, 10);
	draw_point(-10, 10);
	draw_point(-10, -10);
	draw_point(10, -10);
	getch();
	end_plotenv();
}
