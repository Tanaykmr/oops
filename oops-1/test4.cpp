#include <iostream>
using namespace std;
class Hero {
	// this is how to make our own default constructor, that will automatically get called when an obj is created. once we make this, the default contructor dies
	public:
		Hero() {
			cout << "constructor called" << endl;
		}
};
int main()
{
	cout  << "Hi" << endl;
	Hero ramesh;
	Hero *h = new Hero;
	cout << "Hello" << endl;
	// This helps us learn the flow of the program
}
// check test5.cpp