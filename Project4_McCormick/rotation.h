// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Update by Nick McCormick
April 22, 2016
Update: added GLint 'step' parameter to the transform function.

Update by Nick McCormick
May 6, 2016
Added a variable to the rotation constructor and transform function representing the z-axis.
*/

// Class definition for rotation class

class Rotation: public Transformation
{
public:
	Rotation(GLdouble angle, GLdouble x, GLdouble y, GLdouble z, GLint stepStart, GLint stepEnd) : Transformation (stepStart, stepEnd) 
	{
		this->angle = angle; this->x = x; this->y = y; this->z = z; 

	};
	
	void transform(Transformable* transformable, GLint step) const override; 
private:
	GLdouble angle, x, y, z; 
};