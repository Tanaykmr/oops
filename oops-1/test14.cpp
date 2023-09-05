//static keyword usage
// static function
#include <iostream>
using namespace std;
class Hero {
	// static functions can only access static members;
	private:
		int health;
	public:
		char level;		
		void print();
		// this is a usage of hte static keyword
		static int timeToComplete;
		static void random()
		{
			cout << 4 << endl;
		}
};
void Hero :: print()
{
		cout << "Level: " << level << endl;
		cout  << "health: " << health << endl;
}
int Hero::timeToComplete = 6;
int main()
{
	// we can access a static var without creating an object
	cout << Hero::timeToComplete << endl;
	// we can also create an obj and access it
	Hero a;
	cout << a.timeToComplete << endl;
	// static vars are shared by all objects of the class, and hence the second practice is not recommended, always use the 1st one
	a.timeToComplete = 7;
	cout << Hero::timeToComplete << endl;
	cout << a.timeToComplete << endl;
	Hero::random();
}
