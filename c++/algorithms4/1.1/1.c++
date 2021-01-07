#include <ios>
#include <iostream>
#include <typeinfo>
int main() {
    std::cout << typeid((0 + 15) / 2).name() << std::endl;
    double d = 1.0e-10;
    std::cout << "scientific:\n" << std::scientific;
    std::cout << '\n' << d << std::endl;
    std::cout << 2.0e-6 * 100000000.1 << std::endl;
    std::cout << (true && false || true && true) << std::endl;
    std::cout << true << std::endl;
    return 0;
}
