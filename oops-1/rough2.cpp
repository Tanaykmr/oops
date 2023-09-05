#include <iostream>
using namespace std;
int main()
{
	char myString[] = "Hello";
	cout << "size: " << sizeof(myString) << endl;
	cout << "strlen: " << strlen(myString) << endl;
	for (int i = 0; i < sizeof(myString) + 30; i++)
	{
		cout << "myString[" << i << "]" << myString[i] << endl;
	}
}
