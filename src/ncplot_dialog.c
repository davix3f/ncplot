#include "ncplot.h"

const char* new_input_dialog()
{
    WINDOW* dialog;
    dialog = newwin(5,20, (getmaxy(main_win)/2)-3, (getmaxx(main_win)/2)-10);
    refresh();

    box(dialog, 0,0);

    mvwprintw(dialog, 0,8, "CMD"); refresh();
    wmove(dialog, 2,1); 
    curs_set(1);
    wrefresh(dialog);

    char input[10];

    echo();
    mvwgetstr(dialog, 2,1, input);
    mvwprintw(main_win, 0,0, "%s", input); wrefresh(main_win);
    noecho();
    curs_set(0);

    delwin(dialog);
    redrawwin(main_win);
    wrefresh(main_win);
}