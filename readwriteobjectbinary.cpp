#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    char name[30];  // fixed-size char array (not std::string)

public:
    void setData(int r, const char n[]) {
        roll = r;
        strcpy(name, n);
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(1, "Deepak");

    // Write object in binary file
    ofstream fout("student.dat", ios::binary);
    fout.write((char*)&s1, sizeof(s1));
    fout.close();

    // Read object back
    Student s2;
    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    cout << "Object read from file: ";
    s2.display();

    return 0;
}
