#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;   // one word only (use getline if full name needed)
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "Roll: " << roll 
             << ", Name: " << name 
             << ", Marks: " << marks << endl;
    }

    // Write object to file (single line, space-separated)
    void writeToFile(ofstream &fout) const {
        fout << roll << " " << name << " " << marks << endl;
    }

    // Read object from file (space-separated)
    void readFromFile(ifstream &fin) {
        fin >> roll >> name >> marks;
    }
};

int main() {
    const int n = 3;
    Student s[n];

    cout << "Enter details of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].input();
    }
	
    // -------- Writing to file --------
    ofstream fout("students.txt");
    for (int i = 0; i < n; i++) {
        s[i].writeToFile(fout);
    }
    fout.close();

    cout << "\nData written successfully to file!\n";

    // -------- Reading from file --------
    ifstream fin("students.txt");
    cout << "\nReading data back from file:\n";
    Student temp;
    while (fin >> ws && !fin.eof()) {   // read till end of file
        temp.readFromFile(fin);
        if(!fin.eof())  // avoid printing last garbage read
            temp.display();
    }
    fin.close();

    return 0;
}