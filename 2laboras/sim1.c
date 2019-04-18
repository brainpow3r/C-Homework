#include <ncurses.h>


int main(int argc, char *argv[])
{	initscr();
        cbreak();
	timeout(300);			/* Start curses mode 		*/
        //mvaddch(5,3,'*');
        curs_set(0);  
        int x = 0;     
        while(getch() != 'a'){
           mvaddch(5,x,' ');
           x++; 
           mvaddch(5,x,'*');
           refresh();
        }
    	getch();
	endwin();
}

