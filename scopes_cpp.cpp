#include <iostream>
#include <functional>
using namespace std;

function<int()> make_counter() {
    int count = 0;
    return [count]() mutable {
        count += 1;
        return count;
    };
}

int main() {
    auto c = make_counter();
    cout << c() << " " << c() << " " << c() << "\n";
}