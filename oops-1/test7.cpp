// we will learn about the copy instructor
#include <iostream>
using namespace std;
class Hero {
	private:
        int health;
    public:
        char level;
        Hero(int health, char level)
        {
            this -> health = health;
            this -> level = level;
        }

        void print()
        {
            cout << "health: " << health << endl;
            cout << "level: " << level << endl;

        }

        void setHealth(int health)
        {
            health = health;
        }

        /*
        I ust figured out another way to do this without using this keyword
        void setHealth(int h)
        {
            health = h;
        }
        */
       // This is the copy constructor
       Hero(Hero& temp)
       {
            cout << "copy constructor is being called" << endl;
            this -> health =  temp.health;
            this -> level = temp.level;
       }
};
int main()
{
    Hero suresh(70, 'C');
	cout << "Hello world" << endl;
    suresh.print();
    Hero ritesh(suresh);
    ritesh.print();
    ritesh.setHealth(100);
    ritesh.print();
}
// go to test8.cpp