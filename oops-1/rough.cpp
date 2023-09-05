#include <iostream>
using namespace std;
class man {
	public:
		int age;
};
int main()
{
	man dev;
	dev.age = 20;
	cout << sizeof(dev) << endl;
}
