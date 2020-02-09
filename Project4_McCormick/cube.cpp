// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 6, 2016


#include "stdafx.h" 

// This is the function body of the drawShape function. It draws a 1x1 cube centered at the origin using 12 line segments.

void Cube::drawShape() {

	// I used this for testing to make sure my cube was being drawn correctly.
	//glutWireCube(1);  

	// I use GL_LINES to draw the cube.
	glBegin(GL_LINES); 

	// Front
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);

	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, 0.5f);

	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, 0.5f);

	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, 0.5f);

	// Back
	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);

	glVertex3f(-0.5f, -0.5f, -0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);

	glVertex3f(-0.5f, 0.5f, -0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);

	glVertex3f(0.5f, 0.5f, -0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);

	// Sides
	glVertex3f(-0.5f, -0.5f, 0.5f);
	glVertex3f(-0.5f, -0.5f, -0.5f);

	glVertex3f(-0.5f, 0.5f, 0.5f);
	glVertex3f(-0.5f, 0.5f, -0.5f);

	glVertex3f(0.5f, -0.5f, 0.5f);
	glVertex3f(0.5f, -0.5f, -0.5f);

	glVertex3f(0.5f, 0.5f, 0.5f);
	glVertex3f(0.5f, 0.5f, -0.5f);

	glEnd(); 
}
