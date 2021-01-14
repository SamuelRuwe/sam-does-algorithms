#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};
int main()
{
    Point p = { 13, 10 };
    cout << p.x << endl;
    Point *ptr = &p;
    cout << ptr -> x << endl;
    ptr -> x = 5;
    cout << ptr -> x << endl;
    cout << p.x << endl;
    return 0;
}
