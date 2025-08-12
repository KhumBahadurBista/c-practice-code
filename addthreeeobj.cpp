#include<iostream>
using namespace std;
class number
{
	public:
	   int value;
	   number(int v=0)
	   {
	   	value = v;
				}
				number operator+(number obj)
				{
					
					return number(value + obj.value);
				}
};
int main()
{
	number a(5),b(7),c(8);
	number sum =a+b+c;
	cout<<"sum="<<sum.value;
 return 0;
}