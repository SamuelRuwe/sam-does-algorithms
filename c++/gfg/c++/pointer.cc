#include <iostream>
using namespace std;
void pointerfun()
{
    int var = 20;

    int* ptr = &var;

    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";

    *ptr = 15;
    cout << "Value at ptr = " << ptr << "\n";
    cout << "Value at var = " << var << "\n";
    cout << "Value at *ptr = " << *ptr << "\n";

}

int main()
{
    pointerfun();
}
