#include <stdio.h>
#include "gfx2.h"
#include "lab1-p1-letterLib.h"

//Dino Dan, CSC250-SP19
//Lab1
int main()
{
    //sets screen size 500 x 500
	int ysize = 500;
	int xsize = 500;

	char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to red
	gfx_color(200,0,0);
	drawCharQ(20,20,300);
	
	gfx_color(0,0,250);
	drawCharQ(40,40,40);
	
	gfx_color(250,0,250);
	drawCharQ(80,80,40);
	
	gfx_color(0,250,0);
	drawCharQ(120,120,40);
	
	gfx_color(100,100,100);
	drawCharQ(160,160,40);
	
	gfx_color(0,250,250);
	drawCharQ(200,200,40);
	
	//draw circle with loop
    double r = 10.0;
    for(int k=0; k<10; k++)
    {
      gfx_color(200,75,r);
      drawCharQ(250,r,r);
      r = r + 20.0;      
    }//End for
	
	
	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//End while

	return 0;
	
}//End main


