#include<iostream>
using namespace std;
int main()
{
	float l_meter,l_inches,l_feet;
	cout<<"Enter length in mtr:"<<endl;
	cin>>l_meter;
	l_inches=l_meter*39.37;
	l_feet=l_meter*3.28;
	cout<<"length in inches:"<<l_inches<<endl;
	cout<<"length in feets:"<<l_feet<<endl;
	return 0;
}
