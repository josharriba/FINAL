//joshua arriba and vu vy

#include "Human.h"

//constructors
//default
Human::Human() //male
{
   age = 0;
   immunityVal = 1.0;
}

//alternate
Human::Human(int _size)
{
	size = 0;
	data = new char[size];
}
