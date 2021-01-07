#include <iostream>
using namespace std;

namespace ns
{
    class example;
}

class ns::example
{
public:
    void display()
    {
        cout << "ns::example::display()\n";
    }
};

int main()
{
    ns::example obj;

    obj.display();

    return 0;
}
