// we will learn about the copy assignment operator
#include <iostream>
using namespace std;
class Hero {
	private:
		int health;
	public:
		char level;
	void print()
	{
		cout << "health: " << health << endl;
		cout << "level: " << level << endl;
	}

	Hero(int health, char level) {
		cout << "simple constructor called" << endl;
		this -> health = health;
		this -> level = level;
	}
};

int main()
{
	Hero hero1(70, 'A');
	cout << "hero1 is: " << endl;
	hero1.print();
	Hero hero2(100, 'B');
	cout << "hero2 is: " << endl;
	hero2.print();
	hero2 = hero1;
	cout << "afer using copy assignment operator, hero2 is: " << endl;
	hero2.print();
}
// go to test11.cpp to learn about desrtructor
