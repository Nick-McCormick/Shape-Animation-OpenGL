// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 6, 2016

// This is the class definition for the Tetrahedron class
// It extends the Polyhedron base class

class Tetrahedron : public Polyhedron
{
public:
	Tetrahedron(Color color, vector<Transformation*> transformations) : Polyhedron(color, transformations) {}

	void drawShape() override { glutWireTetrahedron(); } 
};
