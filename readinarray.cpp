#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream FileName;
    FileName.open("writingprogram.txt", ios::in);

    if (!FileName) {
        cout << "File doesn’t exist.";
    } else {
        char buffer[1000];   // Array to store file content (adjust size as needed)
        int i = 0;

        // Read characters including spaces and newlines into array
        char ch;
        while (FileName.get(ch)) {
            buffer[i++] = ch;
        }

        buffer[i] = '\0'; // Null terminate to make it a proper C-string

        // Print stored content
        cout << "File Content:\n";
        cout << buffer << endl;
    }

    FileName.close();
    return 0;
}