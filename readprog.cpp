#include<iostream>                        
#include <fstream>                        
using namespace std;
int main() {
    fstream FileName;                   
    FileName.open("writingprogram.txt", ios::in);         
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else {
        char x;                     
        while (1) {         
            FileName>>x;              
            if(FileName.eof())          
                break;              
            cout<<x;                  
        }
    }
    FileName.close();                   
    return 0;
}