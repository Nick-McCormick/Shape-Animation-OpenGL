/*
Nick McCormick
April 23, 2016
Project 3
*/

/*
Update by Nick McCormick
April 22, 2016
Update: added GLint 'step' parameter to the transform function.

Update by Nick McCormick
May 6, 2016
Added a variable to the rotation constructor and transform function representing the z-axis.
*/


// This is the implementation of the Rotation class
#include "stdafx.h" 

void Rotation::transform(Transformable* transformable, GLint step) const { 

	// if the current step is past the last step of the animation, repeat the last step.
	if (step > stopStep) {
		transformable->rotate(angle * ((stopStep - startStep) + 1), x, y, z); 
	}

	// if the current step of the animation is between the start and stop steps, 
	// calculate the current step and perform the rotation based on what the current step is.
	if (step >= startStep && step <= stopStep) {

		GLint numberOfSteps = step - startStep + 1;
		transformable->rotate(angle * numberOfSteps, x, y, z); 
	}


}