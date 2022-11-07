#include <iostream>

using std::endl;

namespace A
{
    namespace B
    {
        int mult(int a, int b)
        {
            return (a * b);
        }
    }
}
namespace AB = A::B;

int main()
{
    std::cout << "AB: " << AB::mult(5, 4) << endl;
}