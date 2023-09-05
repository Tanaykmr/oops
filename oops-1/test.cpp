#include <iostream>
#include "Hero.cpp"
using namespace std;
int main()
{
	Hero ramesh;
	ramesh.setHealth(70);
	cout << ramesh.health << endl;
	cout << "The size of ramesh is: " << sizeof(ramesh) << endl;
}
