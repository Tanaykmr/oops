// we will learn about inheritance ambiguity
#include <iostream>
using namespace std;
class a {
	public:
		void x()
		{
			cout << "hello from func a" << endl;
		}
};
class b {
	public:
		void x()
		{
			cout << "hello from func b" << endl;
		}
};
class c: public a, public b {
		
};
int main()
{
	cout << "hi" << endl;
	c man;
	// man.x();
	// this creates ambiguity and the compiler does not know which class's func to use.
	// hence, we use scope resolution operator
	man.a::x();
}
