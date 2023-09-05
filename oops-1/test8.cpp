// shallow vs deep copy
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

		void setLevel(char ch)
		{
			this -> level = ch;
		}

		void setHealth(int health)
		{
			this -> health = health;
		}

		void setName(char name[])
		{
			memcpy(this -> name, name, strlen((name)) + 1);
		}

		void print()
		{
			cout << "health: " << health << endl;
			cout << "level: " << level << endl;
			cout << "name: " << this -> name << endl;
		}
};

int main()
{
	Hero hero1(12, 'D', "Kumar");
	// we always have to have 1 more space for the null character
	hero1.print();

	Hero hero2(hero1);
	hero2.print();
	hero2.name[1] = 'g';
	hero2.print();
	hero1.print();
	// as we can see, altering hero2 also alters hero1. This is because the default copy constructor makes a shallow copy.
	// look at test9.cpp to make a deep copy
}
