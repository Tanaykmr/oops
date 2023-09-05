// param-constructor
#include <iostream>
using namespace std;
class Hero {
	private:
        int health;
    public:
        char level;
    // parameterised constructor
    // we want the health in line 6 to have the value of the health in line 11
        Hero(int health) {
            // health = health;
            cout << "The address of this is: " << this << endl;
            this -> health = health;
        }

        void getHealth()
        {
            cout << "health: " << health << endl;
        }
    // this keyword stores the address of the current object("this" is a pointer)
    /* Understand carefully:
        we use the "this" keyword to access the current object's members. By writing this -> health = health, we are assigning the OG health(private)'s value to the health in the parameterised constructor
    */
};
int main()
{
    Hero ramesh(10);
    cout << "ramesh's address is: " << &ramesh << endl;
    ramesh.getHealth();


    /*Explanation
        1. this keyword stores the address of the current object(printing out the address of this and ramesh gives the same address)
        2. In this -> health = health, the LHS denotes the OG health(private) and the RHS denotes the health in the parameterised constructor
        3. Hence, we assign the value of the parameter(10) to the OG health(private)
    */
}
// now go to test6.cpp

