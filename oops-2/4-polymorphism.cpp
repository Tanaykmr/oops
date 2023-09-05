// this is super duper important
// Polymorphism:
// 	1. Compile time polymorphism
// 	2. Run time polymorphism
// 1: 
#include <iostream>
using namespace std;
class A {
    public:
        // having 2 functions with same name but different parameters is called function overloading
        void sayHello() {
            cout << "Hello Tanay" << endl;     
        }

        void sayHello(string name) {
            cout << "Helloo " + name << endl;     
        }
};
int main() {
    A obj;
    obj.sayHello();
    obj.sayHello("Tanay");
    return 0;
}
// check 4.2 for operator overloading