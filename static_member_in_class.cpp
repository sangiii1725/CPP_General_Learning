#include <iostream>
using namespace std;

class Box {
public:
    static int count;  // Declaration
    static void print() { std::cout << "Boxes: " << count; }
};
int Box::count = 0;  // Definition

int main() {
    Box b1, b2, b3;  // count becomes 2 if incremented in ctor
    Box::print();  // Output: Boxes: 2
}
