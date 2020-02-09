// CMSC 405 Computer Graphics
// Project 4
// Nick Joseph McCormick
// May 5, 2016


// Base class for all 3D polygon classes. Polyhedron is a abstract class because it includes the virtual function 'drawShape'

class Polyhedron : public Transformable
{
public:
	virtual void drawShape() = 0;
	void draw(GLint step);

protected:
	Polyhedron(Color color, vector<Transformation*> transformations);
	void colorDrawing() const;

	void translate(GLdouble translateX, GLdouble translateY, GLdouble translateZ) override { glTranslated(translateX, translateY, translateZ);} 
	void rotate(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)	override { glRotated(angle, x, y, z); }
	void scale(GLdouble scaleX, GLdouble scaleY, GLdouble scaleZ) override { glScaled(scaleX, scaleY, scaleZ); } 

	vector<Transformation*> transformations; 
	Color color;
	
};
