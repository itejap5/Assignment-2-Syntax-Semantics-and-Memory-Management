#include <iostream>
#include <memory>
using namespace std;

int main() {
    auto p = make_unique<int>(42);
    cout << *p << "\n";
    auto a = make_shared<int>(7);
    auto b = a;
    cout << *a + *b << "\n";

    return 0;
}
