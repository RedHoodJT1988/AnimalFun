#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main()
{
	//Animal myAnimal("Harry", 30);
	Dog dog("Rover", 80, "Greyhound");
	Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");
	Animal* catPtr = new Cat("Sylvester", 80);

	cout << "Make noise? " << dogPtr->makeNoise() << endl;
	cout << dogPtr->eat() << endl;
	cout << "Make noise? " << catPtr->makeNoise() << endl;
	cout << catPtr->eat() << endl;
	cout << "Cat eating? " << catPtr->eat() << endl;

	//((Cat*)catPtr)->chaseMouse();

	(reinterpret_cast<Cat*>(catPtr))->chaseMouse();

	/*cout << "Animal name: " << myAnimal.getName() << endl;
	cout << "Animal weight: " << myAnimal.getWeight() << endl;
	cout << "Animal noise: " << myAnimal.makeNoise() << endl;

	cout << endl;

	cout << "Dog's name: " << dog.getName() << endl;
	cout << "Dog's weight: " << dog.getWeight() << endl;
	cout << "Dog's noise: " << dog.makeNoise() << endl;
	dog.digHole();
	cout << endl;
	dog.chaseCat();*/

	delete dogPtr;
	dogPtr = nullptr;
	delete catPtr;
	catPtr = nullptr;

	return 0;
}