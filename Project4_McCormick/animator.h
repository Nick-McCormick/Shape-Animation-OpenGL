/*
CMSC 405
Project 3
Nicholas McCormick
April 21, 2016
*/


// Class definition for the animator that is used to animate the scene.

class Animator {

public:
	Animator() {};
	Animator(string filename);
	void draw(void); 
	void createWindow(); 
	void nextStep(void);
	void keyboard(unsigned char key, int x, int y); 

private:
	Scene scene; 
	GLboolean running = true; 
	GLint step = 0; 


};
