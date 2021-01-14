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
    weak_ptr<Test> ptr1;
    shared_ptr<Test> ptr3;
    {
        shared_ptr<Test> ptr2 = make_shared<Test>(10);
        ptr1 = ptr2;
        cout << ptr1.use_count() << endl;
        ptr3 = ptr1.lock();
    }
    cout << "ptr1 expired? " << ptr1.expired() << endl;
    cout << "Main ends \n";
    return 0;
}

// weak pointer does not increase reference count
// reference is destroyed after ptr2 goes out of scope
// function lock changes weak pointer to a shared pointer
// always used with shared pointers
// use weak pointers to help with cyclic dependency
