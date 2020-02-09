// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

/*
Modified by Nick McCormick
April 22, 2016
Project 3
Update: Instance of new class Animator is now used in place of Scene. 
Added glutTimerFunc to main method and timerFunc function. This class is now used to animate different shapes. 

____________________________________________________________________________

Update by Nick McCormick
May 6, 2016
Purpose: Modified for Project 4
Update: Added code to the draw function that produces a orthographic projection of a 3D scene. 
*/

// Project 2 main source file

#include "stdafx.h"

// Global variable that defines the scene object

//static Scene scene;
static Animator animate; 

// called when a timer is fired. It calls the nextStep func and sets the timer to re-fire.
// Currently using glutTimerFunc func however a Sleep func in the Animator class could also be used.  
void timerFunc(GLint var) {

	// calls the nextStep func in the Animator class.
	animate.nextStep();
	// sets timer to re-fire.
	glutTimerFunc(33, timerFunc, 1);
}

// Function that is called each time the window is drawn
void draw(void) { 
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 

	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0);
	double dist = sqrt(1 / 3.0);
	gluLookAt(dist / 2, dist / 2, dist, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	

	glLoadIdentity();
	glColor3f(0.0f, 0.0f, 0.0f);

	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex3f(0.0f, 2.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.0f, 2.0f);
	glEnd();

	animate.draw(); 
	glFlush();	
}

void keyboard(unsigned char key, int x, int y) { animate.keyboard(key, x, y); }; 

// Function that is called each time the window is resized

void resizeWindow(GLint newWidth, GLint newHeight)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D((GLdouble)-newWidth / 2, (GLdouble)newWidth / 2, (GLdouble)-newHeight / 2, (GLdouble)newHeight / 2);
	glClear(GL_COLOR_BUFFER_BIT);
}

// The main function of the whole program, which requires the name of the scene definition file as a command line argument
// If no command line argument is supplied the user is prompted to enter the file name
// It calls the parser to parse the scene definition file and add the graphic objects to the scene,
// and then it creates the drawing window and registers the callback function for drawing the window and resizing it

int main(GLint argc, char** argv)
{
	string sceneFile;
	if (argc > 1)
		sceneFile = argv[1];
	else
	{
		cout << "Enter scene file name: ";
		cin >> sceneFile;
	}
	try
	{
		// initialize Animator instance
		 animate = Animator(sceneFile); 
	}
	catch (SyntaxError error)
	{
		cout << error.what() << endl;
		system("pause");
		return 1;
	}
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	animate.createWindow(); 
	glutDisplayFunc(draw); 
	glutReshapeFunc(resizeWindow);

	glutKeyboardFunc(keyboard);  

	// a timer callback func
	// comment out to use the Sleep func
	glutTimerFunc(33, timerFunc, 1); 

	glutMainLoop();
	return 0;
}
