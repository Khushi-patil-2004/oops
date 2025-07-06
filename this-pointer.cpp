#include<iostream>
using namespace std;

class Student {
private:
    int id;

public:
    void setId(int id) {
        this->id = id; // 'this->id' refers to the current object, 'id' refers to parameter value
    }

    void showId() {
        cout << "Student ID: " << id << endl;
    }
};

int main() {
    Student s;
    s.setId(101);
    s.showId();  
}
