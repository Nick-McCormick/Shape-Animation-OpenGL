/*
CMSC 405
Project 3
Nicholas McCormick
April 21, 2016
*/


#include "stdafx.h" 

// constructor that parses the scene file.
Animator::Animator(string sceneFile) {
	Parser parser(sceneFile); 
	scene = parser.parseScene();
}

void Animator::draw() {

	// Uncomment to use Sleep Func
	/*
	// if the animation is not paused continue with the animation.
	if (running) {

		nextStep();
		scene.draw(step);
		glutSwapBuffers();
		glutPostRedisplay();
	} 
	*/ 

	// comment to use Sleep Func
	scene.draw(step);
	glutSwapBuffers();
	glutPostRedisplay(); 

}

// calls scene to create the window.
void Animator::createWindow() {
	scene.createWindow(); 
}

// increments the step of the animation and sleeps for 50 Miliseconds if using Sleep Function.
// Otherwise it checks to see if the animation is running, if so, goes to the next step in the animation and calls draw(). 
void Animator::nextStep(void) {

	// Uncomment to use the Sleep function to control the animation.
	/*
	Sleep(SLEEPMS);
	step++; 
	*/

	// comment out to use Sleep Function
	if (running) {
		step++;
		draw(); 
	}
	  
}


// the keyboard function is used to start and stop the animation. 'r' or 'R' resets the animation by setting the step count to 0
void Animator::keyboard(unsigned char key, int x, int y) {
	switch (key) {

	case 's':
	case 'S':
		//nextStep(); 
		running = true; 
		draw(); 
		break; 
	case 'p':
	case 'P':
		running = false; 
		glutIdleFunc(NULL);
		break; 

	case 'r':
	case 'R':
		this->step = 0;
		running = false; 
		glutIdleFunc(NULL);  
		break; 
	default:
		break; 
	}

}