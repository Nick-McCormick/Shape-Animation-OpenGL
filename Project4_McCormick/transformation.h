// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Modified by Nick McCormick
April 22, 2016
Update: Transformation is now an abstract class. Added GLint startStep, GLint stopStep and new parameter 'step'.
*/

class Transformation
{
public:

	Transformation(GLint startStep, GLint stopStep) {
		this->startStep = startStep;
		this->stopStep = stopStep; 
	}

	virtual void transform(Transformable* transformable, GLint step) const = 0; 

	GLint startStep;
	GLint stopStep; 

};