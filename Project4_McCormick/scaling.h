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


// Class definition for scaling class

class Scaling: public Transformation
{
public:
	Scaling(GLdouble x, GLdouble y, GLdouble z, GLint stepStart, GLint stepEnd);
	void transform(Transformable* transformable, GLint step) const override; 
private:
	GLdouble x, y, z;
};