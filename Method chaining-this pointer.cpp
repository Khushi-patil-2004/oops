
#include<iostream>
using namespace std;
class Box {
private:
    int length;

public:
    Box* setLength(int l) {
        this->length = l;
        return this;  // This returns the current object as a pointer so that we can call another method on the same object in the same line.
    }

    void show() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b;
    b.setLength(10)->show();  // Method chaining 
}
