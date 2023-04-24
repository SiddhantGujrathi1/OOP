
//============================================================================

// Name        : Assignment_1.cpp

// Author      : Gujrathi Siddhant

//============================================================================

#include <iostream>
using namespace std;

class complex
{
	int real,imag;
public:
	complex()
	{
		real = 0;
		imag = 0;
	}

	complex operator +(complex&k)
	{
		complex res;
		res.real = real +  k.real ;
		res.imag = imag + k.imag;
		return res;
	}

	complex operator *(complex&k)
	{
		complex res;
		res.real = (real*(k.real))-(imag*(k.imag));
		res.imag = (real*(k.imag))+(imag*(k.real));
		return res;
	}
	friend ostream& operator << (ostream&out,const complex&k)
	{
		out<<k.real<<" + "<<k.imag<<"i";
		return out;
	}
	friend istream& operator >>(istream&in, complex&k)
	{
		cout<<"Enter real part of no. : ";
		in>>k.real;
		cout<<"Enter imaginary part of no. : ";
		in>>k.imag;
		return in;
	}
}c1,c2,c3,c4;

int main()
{
	cin>>c1;
	cin>>c2;
	c3 = c1+c2;
	cout<<"\nAddition is...";
	cout<<c3;
	c4 = c1*c2;
	cout<<"\nMultiplication is...";
	cout<<c4;
	return 0;
}

