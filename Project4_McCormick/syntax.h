// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Exception class that defines syntax errors in the scene definition file

#ifdef __APPLE__
class SyntaxError : public runtime_error
{
public:
	SyntaxError(string message) : runtime_error(message.c_str()) {}
};
#else
class SyntaxError : public exception
{
public:
	SyntaxError(string message) : exception(message.c_str()) {}
};
#endif
