
#include "Object.h"
#include <iostream>

Object::Object()
{	
	std::cout 	<< "Object default c-tor()" << std::endl;
}

Object::Object(int val)
{	
	std::cout << "Object c-tor(int)" << std::endl;
}

Object::Object(const Object& obj)
{	
	std::cout << "Object copy c-tor()" << std::endl;
}

Object& Object::operator=(const Object& obj)
{	
	std::cout << "Object operator =" << std::endl;
}

Object::~Object()
{	
	std::cout << "Object d-tor()" << std::endl;
}

