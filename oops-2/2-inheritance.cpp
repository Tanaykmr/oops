#include <iostream>
using namespace std;
class human {
	public:
		int height;
		int weight;
		int age;

		int getAge()
		{
			return age;
	
		}
		void setWeight(int w)
		{
			weight = w;
		}
};
// male is a child class of human
class male : public human {
	public:
		string color;

		void sleep() {
			cout << "i am sleeping" << endl;
		}
};
int main()
{
	male obj1;
	cout << "height: " << obj1.height << endl;
	cout << "weight: " << obj1.weight << endl;
	cout << "age: " << obj1.age << endl;
	cout << "color: " << obj1.color << endl;
}

/* Types of Inheritance:
1. single inheritance: 1 parent, 1 child
2. multilevel inheritance: 1 child, 2 parents. ex: animal -> dog -> german shepherd
3. multiple inheritance: 1 child, 2 parents; a = father(parent class), b = mother(parent class), c = child(child class)
	syntax:	
		class c : public a, public b {
			// body
		};
4. hierarchical inheritance: hierarchical inheritance.jpg
5. hybrid inheritance: a mix of multiple types of inheritance
*/