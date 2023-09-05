#include <iostream>
using namespace std;
class Hero {
	char name[100];
    // access modifiers can be public, private and protected
    // public access modifiers can be accessed within and OUTSIDE the class
    // private access modifiers can be accessed within the class
    public:
    int health;
	char level;
};
int main()
{
	// static allocation
	Hero a;
	cout << "Health is: " << a.health << endl;
    // dynamic allocation
    Hero *b = new Hero();
    cout << "Health with (*b) is: " << (*b).health << endl;
    // or
    cout << "Health with b-> is: " << b->health << endl;
}
// now go to test3.cpp

