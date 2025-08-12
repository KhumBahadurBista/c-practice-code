#include<iostream>
using namespace std;
class a
{
	double rate;
	
	public:
		a(double r=1.6)
		{
			rate = r;
			
		}
		double convert(double npr = 1)
		{
			return npr*rate;
		}
};

int main()
{
	double ind;
	cout<<"enter indain rupees";
	cin>>ind;
	a converter;
	double nprr = converter.convert(ind);
	cout<<"nepali rupees: "<<nprr<<endl;
	return 0;
}