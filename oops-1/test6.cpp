#include <iostream>
using namespace std;
class Hero {
	private:
		int health;
	public:
		char level;
	Hero(int health, char level) {
		this -> health = health;
		this -> level = level;
	}
	void getHealth() {
		cout << "health: " << health << endl;
	}
}
// go to test7.cpp to learn test7.cpp;
