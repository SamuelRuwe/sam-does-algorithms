#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // double
    cout << typeid((1 + 2.236) / 2).name() << endl;
    // double
    cout << typeid(1 + 2 + 3 + 4.0).name() << endl;
    // boolean true
    cout << typeid(4.1 >= 4).name() << endl;
    // string >> 33
    cout << typeid(1 + 2 + "3").name() << endl;
    // char
    cout << typeid("3").name() << endl;
}
