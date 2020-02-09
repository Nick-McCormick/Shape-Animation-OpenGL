// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 6, 2016

// This is the class definition for the Dodecahedron class
// It extends the Polyhedron base class

class Dodecahedron : public Polyhedron
{
public:
	Dodecahedron(Color color, vector<Transformation*> transformations) : Polyhedron(color, transformations) {}

	// draws the shape
	void drawShape() override { glutWireDodecahedron(); }  
};



