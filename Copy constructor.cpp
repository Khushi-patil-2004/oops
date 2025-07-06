#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Parameterized Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("ABC", 21);
    Student s2 (s1);  // Copy constructor is called here

    s1.display();
    s2.display();

    return 0;
}
