#include <iostream>
using namespace std;

template <typename T, typename U>

class Pair
{
public:
    // Construtor for pair
    Pair(const T &t, const U &u) : first(t), second(u) {}

    T &get_first() { return first; }
    U &get_second() { return second; }

    const T &get_first() const { return first; }
    const U &get_second() const { return second; }

    void printPair()
    {
        cout << "o" << first << ", " << second << ")" << endl;
    }

    void addPair()
    {
        auto x = first + second;
        cout << x << endl;
    }

private:
    T first;
    U second;
};

int main()
{
    string x = "dog", y="cat";
    Pair<string, string> res(x, y);
    res.printPair();
    res.addPair();
};