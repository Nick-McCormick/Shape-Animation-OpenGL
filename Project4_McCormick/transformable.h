// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Modified by Nick McCormick
May 5, 2016
Added additional variable to the functions representing the z-axis. 
*/

// An interface that defines the three kinds of transformations

class Transformable
{
public:
	virtual void translate(GLdouble translateX, GLdouble translateY, GLdouble translateZ) = 0;
	virtual void rotate(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)	= 0; 
	virtual void scale(GLdouble scaleX, GLdouble scaleY, GLdouble scaleZ) = 0;
};