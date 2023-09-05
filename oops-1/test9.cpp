#include <iostream>
#include <cstring>
using namespace std;
class Hero {
	private:
		int health;
	public:
		char *name; 
		char level;

		Hero(int health, char level, const char* name) {
			cout << "simple constructor called" << endl << endl;
			this-> name = new char[strlen(name) + 1];
			this -> health = health;
			this -> level = level;
			memcpy(this -> name, name, strlen((name)) + 1);
		}

		void print()
		{
			cout << "health: " << health << endl;
			cout << "level: " << level << endl;
			cout << "name: " << this -> name << endl;
		}

		Hero (Hero& temp)
		{
			char *ch = new char[strlen(temp.name) + 1];
			memcpy(ch, temp.name, strlen(temp.name) + 1);
			this -> name = ch;
			cout <<"deep copy instructor called" << endl << endl;
			this -> health = temp.health;
			this -> level = temp.level;

		}
};

int main()
{
	Hero hero1(12, 'D', "Kumar");
	// we always have to have 1 more space for the null character
	cout << "hero1 " << endl;
	hero1.print();

	Hero hero2(hero1);
	// another way to write this is Hero hero2 = hero1;
	cout << "hero2 " << endl;
	hero2.print();
	
	hero2.name[0] = 'a';
	cout << "after changing hero2's name" << endl;
	cout << "hero1: " << endl;
	hero1.print();
	cout << "hero2: " << endl;
	hero2.print();

	hero2.level = 'A';
	cout << "after changing hero2's level" << endl;
	cout << "hero1: " << endl;
	hero1.print();
	cout << "hero2: " << endl;
	hero2.print();
}
// to learn about copy assignment operator, go to test10.cpp
