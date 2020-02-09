// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013


/*
Modified by Nick McCormick
April 22, 2016
Update: added the 'step' parameter representing the current animation step to the draw function.
*/

// Function bodies of the class that define the scene which contains a collection of graphic objects

#include "stdafx.h"

// Constructor that must be supplied the height and width of the drawing window for the scene

Scene::Scene(string name, GLint height, GLint width)
{
	this->name = name;
	this->height = height;
	this->width = width;
}

// Creates the drawing window for the scene at position 100, 100 with the width and heights supplied to the constructor

void Scene::createWindow()
{
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(width, height);
	glutCreateWindow(name.c_str());
   	glClearColor(1.0, 1.0, 1.0, 1.0);
}

// Traverses all the graphic objects in the scene and calls the draw function to draw them

void Scene::draw(GLint step)
{

	for (auto graphic : graphics)
		graphic->draw(step); 
}