#include <ncurses.h>
#include <stdio.h>

void initmap{
	char map[100][70];
	for(x=0;x<=70;x++){
		for(y=0;y<=100;y++){
			map[y][x]= '.';	
		}
	}
}
void newmap{
	
	
}
void showmap{
	for (x=0;x<=70;x++){
		for(y=0;y<=100;y++){
			printw("%c ");
		}
	}
}	
void endall{
	endwin();
}
