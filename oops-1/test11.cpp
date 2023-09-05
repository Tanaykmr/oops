#include <iostream>
using namespace std;
class Hero {
	private:
		int health;
	public:
		char level;
		
		void print();

		void setLevel(char level)
		{
			this -> level = level;
		}
		
		//constructor
		Hero() {
			cout << "simple constructor called" << endl;
		}
		~Hero() {
			cout << "now I am become death, the destroyer of objects" << endl;
		}
};
// this is how we can define a function outside the class
void Hero :: print()
{
		cout << "Level: " << level << endl;
		cout  << "health: " << health << endl;
}
int main()
{
	// static allocation
	Hero a;
	a.setLevel('A');
	a.print();

	// dynamic allocation
	// health gets initialised to 0 by default in DMA
	Hero *b = new Hero();
	b->setLevel('B');
	b->print();
	// as we are using dma, we need to manually delete the object
    delete b;
}
