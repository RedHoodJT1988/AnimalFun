#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight)
{
	
}

void Cat::chaseMouse() const
{
	cout << "I'm chasing a mouse!" << endl;
}

string Cat::makeNoise() const
{
	return "meow!";
}

string Cat::eat() const
{
	return "Mmm, tasty kitty food!";
}