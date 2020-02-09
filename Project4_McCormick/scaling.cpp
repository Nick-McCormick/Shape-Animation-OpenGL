// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Update by Nick McCormick
April 22, 2016
Purpose: Modified for Project 3
Update: added GLint 'stepStart' and 'stepEnd' parameters to the constructor and added the 'step' parameter to the transform function.

Update by Nick McCormick
May 6, 2016
Purpose: Modified for Project 4
Update: Added a variable to the scaling constructor and transform function representing the z-axis.
*/

// Function bodies for class defining scaling transformation

#include "stdafx.h"

// Constructor to create a scaling object given the scale favtors

Scaling::Scaling(GLdouble x, GLdouble y, GLdouble z, GLint stepStart, GLint stepEnd) : Transformation (stepStart, stepEnd) 
{
	this->x = x;
	this->y = y;
	this->z = z; 

}

void Scaling::transform(Transformable* transformable, GLint step) const {

	// if the current step is past the last step of the animation, repeat the last step.
	if (step > stopStep) {
		transformable->scale(pow(x, (stopStep - startStep) + 1), pow(y, (stopStep - startStep) + 1), pow(z, (stopStep - startStep) + 1));
	}

	// if the current step of the animation is between the start and stop steps, 
	// calculate the current step and perform the rotation based on what the current step is.
	if (step >= startStep && step <= stopStep) {

		GLint numberOfSteps = step - startStep + 1; 
		transformable->scale(pow(x, numberOfSteps), pow(y, numberOfSteps), pow(z, numberOfSteps)); 

	}

}