#include <iostream>
using namespace std;

namespace ns
{
    void display();
    class example
    {
    public:
        void display();
    };
}

void ns::example::display()
{
    cout << "ns::example::display()\n";
}

void ns::display()
{
    cout << "ns::display()\n";
}

int main()
{
    ns::example obj;
    ns::display();
    obj.display();
    return 0;
}
