#include<iostream>                         
#include<fstream>                            
using namespace std;
int main() {
    fstream FileName;                       
    FileName.open("writingprogram.txt", ios::out);                
    if (!FileName) {                            
        cout<<" Error while creating the file ";          
    }
    else {
        cout<<"File created and data got written to file";    
        FileName<<"This is a blog posted on Great Learning"<<endl; 
		FileName<<"1234"; 
        FileName.close();                   
    }
    return 0;
}



