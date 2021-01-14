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
    cout << "Main Beings\n";
    {
        unique_ptr<Test> ptr1 = make_unique<Test>(10); // no other pointer can point to ptr1
        ptr1 -> fun();
        unique_ptr<Test> ptr2 = move(ptr1); // move function transfers ownership to ptr2
    }
    cout << "Main Ends\n";
    return 0;
}
