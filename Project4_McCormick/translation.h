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

// Class definition for translation class

class Translation: public Transformation
{
public:
	Translation(GLdouble x, GLdouble y, GLdouble z, GLint stepStart, GLint stepEnd); 
	void transform(Transformable* transformable, GLint step) const override; 
private:
	GLdouble x, y, z; 
};