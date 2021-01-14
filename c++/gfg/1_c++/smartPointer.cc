#include <iostream>
using namespace std;

class Test
{
    public:
        int x, y;
        Test(int a = 0, int b = 0)
        {
            x = a;
            y = b;
            cout << "constructor called\n";
        }
        ~Test()
        {
            cout << "Destructor Called\n";
        }
};

template <class T>
class SP
{
    public:
        T *ptr;
        SP(T *p = NULL) {ptr = p;}
        ~SP() {delete ptr;}
        T &operator*() {return *ptr;}
        T *operator -> () {return ptr;}
};

int main()
{
    cout << "Main Begins \n";
    int *ptr1 = new int(10);
    {
        int *ptr2 = ptr1;
        SP<int> sp(ptr2);
        *sp = 20;
        cout << *sp << endl;
        cout << *ptr1 << endl;
    }
    cout << *ptr1 << endl; // example of how smart pointers can be risky as ptr1 has been destructed by ptr2 being destructed
    SP<Test> sp(new Test(25,37));
    cout << sp -> x << endl;
    cout << sp -> y << endl;
    cout << "Main ends\n";
    return 0;
}
