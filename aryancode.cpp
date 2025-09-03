#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int roll;
	char name[30];
	public:
	void setdata(int r, const char n[])
	{
		roll=r;
		strcpy(name,n);
	}
	void display()
	{
		cout<<"Roll: "<<roll<<" Name: "<<name<<endl;	
	}
};
int main()
{
	student s1[3];
	int i=0;
//write
	s1[0].setdata(1,"Ayush");
	s1[1].setdata(2,"Jadu");
	s1[2].setdata(3,"sangam");
	ofstream fout("student.dat", ios::binary);
	for(i=0;i<=2;i++)
	{
			fout.write((char*)&s1[i], sizeof(s1[i]));
	}
	fout.close();

//read
	student s2[3];
	ifstream fin("student.dat", ios::binary);
	for(i=0;i<=2;i++)
	{
			fin.read((char*)&s2[i], sizeof(s2[i]));
	}
	fin.close();
	cout<<"object read from file : "<<endl;
	for(i=0;i<=2;i++)
	{
			s2[i].display();
	}
	return 0;
}