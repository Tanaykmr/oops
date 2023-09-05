#include <iostream>

using namespace std;
class Hero {
	char name[100];
    // access modifiers can be public, private and protected
    // public access modifiers can be accessed within and OUTSIDE the class
    // private access modifiers can be accessed within the class

    
    private:
	int health;
    
    public:
	char level;
    void print() 
    {
        cout << "level: " << level << endl; 
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char a) {
        level = a;
    }
	
};

class Villian{};

int main()
{
	Hero ramesh;
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout << "Health is: " << ramesh.getHealth() << endl;
    // .getHealth() is a sneaky method to get the value in a private access modifier, which should ideally be not accessible in main

	// cout << "size:" << sizeof(ramesh) << endl;
    // cout << "health: " << ramesh.health << endl;
     cout << "level: " << ramesh.level << endl; 

    cout << sizeof(Villian) << endl;
    // size of an empty class is 1 byte
}

// now go to Hero.cpp