#include<iostream>        
#include<fstream>
using namespace std;
int main(){
    fstream FileName;               
    FileName.open("Nepal.txt", ios::app);    
    if (!FileName){                 
        cout<<"Error while creating the file";    
    }
    else{
        cout<<"File created successfully";    
        FileName.close();           
    }
    return 0;
}