#include<iostream>
using namespace std;
template<class t>
class si
{
	public:
		t principal,rate,time;
		si(t p,t r, t ti)
		{
			principal = p;
			rate= r;
			time = ti;
		}
		t calculate()
		{
			return(principal*rate*time)/100;
		}
};
int main()
{
si<float>si(100,5,2);
cout<<"simpple interest: "<< si.calculate();
 return 0;
}