// compile time polymorphism is achieved by function overloading and operator overloading
#include <iostream>
using namespace std;
class B {
	public:
		int a;
		int b;
		int add() {
			return a + b;
		}
		/* this is the format for operator overloading
			"return-type" operator "operation" ("input-arg"):
			in case of +, ex: in a+b, b is the input-arg; */
		void operator+ (B &obj) {
			int value1 = this -> a;
			int value2 = obj.a;
			cout << "output: " << value2 - value1 << endl;
		}
}obj1, obj2;
int main() {
	obj1.a = 4;
	obj2.a = 3;
	obj1 + obj2;
}

/*
	this keyword can be used in 2 ways:
	this -> a = 4;
	(*this).a = 4;
*/
