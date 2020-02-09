// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Update by Nick McCormick
April 22, 2016
Update: added GLint 'stepStart' and 'stepEnd' parameters to the constructor and added the 'step' parameter to the transform function.

Update by Nick McCormick
May 5, 2016
Added a variable to the translation constructor and transform function representing the z-axis.
*/

// Function bodies for class defining translation transformation

#include "stdafx.h"

// Constructor to create a translation object given the translation distances

Translation::Translation(GLdouble x, GLdouble y, GLdouble z, GLint stepStart, GLint stepEnd) : Transformation(stepStart, stepEnd)
{
	this->x = x;
	this->y = y;
	this->z = z; 
}; 

void Translation::transform(Transformable* transformable, GLint step) const {

	// if the current step is past the last step of the animation, repeat the last step.
	if (step > stopStep) {
		transformable->translate(x * ((stopStep - startStep) + 1), y *  ((stopStep - startStep) + 1), z * ((stopStep - startStep) + 1));
	}

	// if the current step of the animation is between the start and stop steps, 
	// calculate the current step and perform the rotation based on what the current step is.
	if (step >= startStep && step <= stopStep) {

		GLint numberOfSteps = step - startStep + 1; 
		transformable->translate(x * numberOfSteps, y * numberOfSteps, z * numberOfSteps); 
	}

}; 
