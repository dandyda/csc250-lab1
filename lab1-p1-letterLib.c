//Dino Dan, CSC250-SP19
//Prototype function drawCharQ used to draw letter 'Q'

#include "gfx2.h"
void drawCharQ(double ulCornerX, double ulCornerY, double height)
{
    // Area of a rectangle is Legth*Width. Width=.75*Length.
    // Length will represent our height, 3/4 of the height will maintain rectangle shape.
    // Program uses height to scale the graphic, and upper left x and y coords for starting point.
    double width = .75 * height;    
    
    //Outer outline of 'Q' using a % of the width for x coords and a % of height for y coords.
    //This method creates a scalable character using three params defined in drawCharQ function.   
    double x1 = ulCornerX + width * .125;
    double y1 = ulCornerY + height * 0;
    double x2 = ulCornerX + width * .875;
    double y2 = ulCornerY + height * 0;
    double x3 = ulCornerX + width;
    double y3 = ulCornerY + height * .125;
    double x4 = ulCornerX + width;
    double y4 = ulCornerY + height * .75;
    double x5 = ulCornerX + width * .906;
    double y5 = ulCornerY + height * .844;
    double x6 = ulCornerX + width;
    double y6 = ulCornerY + height * .906;
    double x7 = ulCornerX + width * .906;
    double y7 = ulCornerY + height;
    double x8 = ulCornerX + width * .812;
    double y8 = ulCornerY + height * .937;
    double x9 = ulCornerX + width * .812;
    double y9 = ulCornerY + height * .937;
    double x10 = ulCornerX + width * .125;
    double y10 = ulCornerY + height * .937;
    double x11 = ulCornerX + width * 0;
    double y11 = ulCornerY + height * .844;
    double x12 = ulCornerX + width * 0;
    double y12 = ulCornerY + height * .125;
    
    //Inner outline coords
    double x13 = ulCornerX + width * .312;
    double y13 = ulCornerY + height * .125;
    double x14 = ulCornerX + width * .687;
    double y14 = ulCornerY + height * .125;
    double x15 = ulCornerX + width * .812;
    double y15 = ulCornerY + height * .25;
    double x16 = ulCornerX + width * .812;
    double y16 = ulCornerY + height * .687;
    double x17 = ulCornerX + width * .687;
    double y17 = ulCornerY + height * .812;
    double x18 = ulCornerX + width * .312;
    double y18 = ulCornerY + height * .812;
    double x19 = ulCornerX + width * .187;
    double y19 = ulCornerY + height * .687;
    double x20 = ulCornerX + width * .187;
    double y20 = ulCornerY + height * .25;
    
    //Draws line segments to create outer outline 'Q' character.
    gfx_line(x1,y1,x2,y2);
    gfx_line(x2,y2,x3,y3);
    gfx_line(x3,y3,x4,y4);
    gfx_line(x4,y4,x5,y5);
    gfx_line(x5,y5,x6,y6);
    gfx_line(x6,y6,x7,y7);
    gfx_line(x7,y7,x8,y8);
    gfx_line(x8,y8,x9,y9);
    gfx_line(x9,y9,x10,y10);
    gfx_line(x10,y10,x11,y11);
    gfx_line(x11,y11,x12,y12);
    gfx_line(x12,y12,x1,y1);
    
    //Draws line segment to create inner outline 'Q' character.
    gfx_line(x13,y13,x14,y14);
    gfx_line(x15,y15,x14,y14);
    gfx_line(x15,y15,x16,y16);
    gfx_line(x17,y17,x16,y16);
    gfx_line(x17,y17,x18,y18);
    gfx_line(x19,y19,x18,y18);
    gfx_line(x19,y19,x20,y20);
    gfx_line(x13,y13,x20,y20);
    
}//End drawCharQ function
