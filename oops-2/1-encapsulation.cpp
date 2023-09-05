// encapsulation is the wrapping up of data members and functions into a single entity
// a fully encapsulated calss is where all data members are private
/*
	advantages of encapsulation:
		1. encapsulation = information hiding/ data hiding
			abstraction = data abstraction
		2. data hiding = increased security
		3. by making data members private and providing only getter and no setter, we can make our class read only
		4. code reusability
		5. helps in unit testing
*/

#include <iostream>
using namespace std;
class student {
	private:
		string name;
		int age;
		int height;
	public:
		int getAge() {
			return age;
		}
};
int main()
{
	student first;
	cout << "hello world" << endl;

}
