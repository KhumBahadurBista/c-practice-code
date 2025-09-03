#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student() {}
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Write object data into file (text)
    void writeToFile(ofstream &out) {
        out << roll << " " << name << endl;
    }

    // Read object data from file (text)
    void readFromFile(ifstream &in) {
        in >> roll >> name;
    }
};

int main() {
     Write
    ofstream fout("student.txt");
    Student s1(1, "Deepak");
    s1.writeToFile(fout);
    fout.close();

    // Read
    ifstream fin("student.txt");
    Student s2;
    s2.readFromFile(fin);
    fin.close();

    cout << "Object read from file: ";
    s2.display();

    return 0;
}

