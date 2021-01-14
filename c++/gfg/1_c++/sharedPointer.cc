#include <iostream>
#include <memory>
using namespace std;

class Test
{
    int x;
    public:
        Test(int a = 0) { x = a; cout << "Constructor\n";}
        ~Test() {cout << "Destructor\n";}
        void fun() {cout << x << endl;}
};

int main()
{
    shared_ptr<Test> ptr1;
    // shared_ptr<Test> ptr1(new Test(10)); other way to make a shared pointer
    {
        shared_ptr<Test> ptr2 = make_shared<Test>(10); // this is the recommended way to create a shared pointer
        cout << ptr1.use_count() << endl;
        cout << ptr2.use_count() << endl;
    }
    return 0;
}

// if all shared pointers go out of scope the destructor is called
// extra overhead involved for reference counting when using shared pointer
