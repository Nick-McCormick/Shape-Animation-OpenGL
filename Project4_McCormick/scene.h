// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

/*
Modified by Nick McCormick
April 22, 2016
Update: added the 'step' parameter representing the current animation step to the draw function.
*/

// Class definition for the scene which contains a collection of polyhedron objects

// The addPolyhedron is called as the scene definition file is parsed to add polyhedron objects to the vector of scene shapes to be drawn. 

class Scene
{
public:
	Scene() {}
	Scene(string name, GLint height, GLint width);
	void createWindow();
	
	void addPolyhedron(Polyhedron* graphic) { graphics.push_back(graphic); }
	void draw(GLint step);
private:
	string name;
	GLint height, width;
	vector<Polyhedron*> graphics; 
};
