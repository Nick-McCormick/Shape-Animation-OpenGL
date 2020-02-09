// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 5, 2016


#include "stdafx.h" 

// Constructor that is supplied color and a vector of transformation objects.

Polyhedron::Polyhedron(Color color, vector<Transformation*> transformations)
{
	this->transformations = transformations;
	this->color = color;

}

void Polyhedron::draw(GLint step) {

	glLoadIdentity();

	// this for each loop calls the transform function on each item in the vector of Transformation objects.
	
	for (auto transformation : transformations)
		transformation->transform(this, step);

	// must be called first
	colorDrawing();
	// calls function to draw the shape of the object.
	drawShape(); 
	
}

// sets the color of the shape.
void Polyhedron::colorDrawing() const
{
	glColor3d(color.red, color.green, color.blue);
}