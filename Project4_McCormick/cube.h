// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 5, 2016


// This is the class definition for the Cube class
// It extends the Polyhedron base class

class Cube : public Polyhedron
{
public:
	Cube(Color color, vector<Transformation*> transformations) : Polyhedron(color, transformations) {} 

	void drawShape() override; 
};
