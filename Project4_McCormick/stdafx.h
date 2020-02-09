// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Header file to be included by all source files

#define _USE_MATH_DEFINES

// added by Nick Mccormick, April 22, 2016
#define SLEEPMS 50 // sleep in miliseconds 

// Contains all header files in the correct order

#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include "types.h"

class Transformation;

#include "transformable.h"

/*
#include "graphic.h"
#include "text.h"
#include "polygon.h"
#include "hollowpolygon.h"
#include "righttriangle.h"
#include "rectangle.h"

#include "convexpolygon.h"
#include "isoscelestriangle.h"
#include "parallelogram.h"
#include "regularpolygon.h" */ 

#include "polyhedron.h" 
#include "tetrahedron.h"
#include "cube.h"
#include "dodecahedron.h" 


#include "transformation.h"
#include "rotation.h"
#include "scaling.h"
#include "translation.h"

#include "scene.h"
#include "syntax.h"
#include "token.h"
#include "lexer.h"
#include "parser.h"

#include "animator.h" 
