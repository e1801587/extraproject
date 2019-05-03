// this file contains screen functions. They are used to display the amount of words and letters on a PUTTY screen as a bar chart

#include <stdio.h>
#include "screen.h"
#include <math.h>

//external variable from project.c
extern int let[26];
extern int let2[26];
extern int words;

//global variable
//alphabet array
char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'}; 

void barChart(){
	int i, j, x, z;
	for(i=0; i<COL; i++){	//for 26 columns
		for(j=0; j<let[i]/2; j++){
			setColors(CYAN, bg(BLACK));
			printf("\033[%d;%dH", 32-j, i+1);

#ifdef UNICODE				//conditional compilation
			printf("%s", BAR);
#else
			printf("%c", '*');
#endif
		}
		//displaying the the numbers on the top of the bars
		setColors(CYAN, bg(BLACK));
		printf("\033[%d;%dH", 32-j, i+1);
		printf("%d", let[i]);

		//displaying the letters under the barchart
		setColors(CYAN, bg(BLACK));
		printf("\033[%d;%dH", 39, i+1);
		printf("%c", a[i]);
	}

	for(x=0; x<COL; x++){
		for(z=0; z<let2[x]/6; z++){
			setColors(GREEN, bg(BLACK));
			printf("\033[%d;%dH", 32-z, x+50);

#ifdef UNICODE
			printf("%s", BAR);
#else
			printf("%c", '*');
#endif
		}
		//displaying the the numbers on the top of the bars of the second barchart
		setColors(GREEN, bg(BLACK));
		printf("\033[%d;%dH", 32-z, x+50);
		printf("%d", let2[x]);

		//displaying the letters under the second barchart
		setColors(GREEN, bg(BLACK));
		printf("\033[%d;%dH", 39, x+50);
		printf("%c", a[x]);
	}
//displaying the total amount of words
	setColors(BLUE, bg(WHITE));
	printf("\033[%d;%dH", 1, 1);
	printf("Total words: %d\n", words);
}

void clearScreen(void){
	printf("\033[2J");
	fflush(stdout);		//library function. For remote terminal (such as PUTTY)
}

void setColors(short fg, short bg){
	printf("\033[%d;%d;1m", fg, bg);
	fflush(stdout);
}

void resetColors(void){
	printf("\033[0m");
	fflush(stdout);
}
