#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
		double real;
        double imag;
        Complex(double re,double im)
        {
        	this->real=re;
        	this->imag=im;
        }
        Complex operator+(const Complex& other);
        Complex operator-(const Complex& other);
        Complex operator*(const Complex& other);
        Complex operator/(const Complex& other);
        Complex operator-();
};
Complex Complex::operator+(const Complex&  other)
{
    double result_real = real + other.real;
    double result_imaginary = imag + other.imag;
    return Complex( result_real, result_imaginary );

}
Complex Complex::operator-()
{
    return Complex( -real, -imag );

}
Complex Complex::operator-(const Complex&  other)
{
    double result_real = real - other.real;
    double result_imaginary = imag - other.imag;
    return Complex( result_real, result_imaginary );
}
Complex Complex::operator*(const Complex&  other)
{
    double result_real = (real*other.real)-(imag*other.imag);
    double result_imaginary = (real*other.imag)+(imag*other.real);
    return Complex( result_real, result_imaginary );
}
Complex Complex::operator/(const Complex&  other)
{
    double result_real = ((real*(other.real))+(imag*(other.imag)))/(other.real*other.real+other.imag*other.imag);;
    double result_imaginary = (((other.real)*(imag))-((real)*(other.imag)))/(other.real*other.real+other.imag*other.imag);
    return Complex( result_real, result_imaginary );
}

/*class complex_number{
	public:
		double real,imag;
		void conjugate()
		{
			imag=(-1)*imag;
			cout<<"Conjugate Result:: "<<this->real<<" + i"<<this->imag<<endl;
		}
		double modulus()
		{
			return sqrt((real*real)+(imag*imag));
		}
		void addition(complex_number two)
		{
			this->real+=two.real;
			this->imag+=two.imag;
			cout<<"Addition Result:: "<<this->real<<" + i"<<this->imag<<endl; 
		}
		void subtraction(complex_number two)
		{
			this->real-=two.real;
			this->imag-=two.imag;
			cout<<"Subtraction Result:: "<<this->real<<" + i"<<this->imag<<endl;
		}
		void multiplication(complex_number two)
		{
			this->real=(this->real*two.real)-(this->imag*two.imag);
			this->imag=(this->real*two.imag)+(this->imag*two.real);
			cout<<"Multiplication Result:: "<<this->real<<" + i"<<this->imag<<endl;
		}
		void division(complex_number two)
		{
			this->real=(((this->real)*(two.real))+((this->imag)*(two.imag)))/(pow(two.modulus(),2));
			this->imag=(((two.real)*(this->imag))-((this->real)*(two.imag)))/(pow(two.modulus(),2));
			cout<<"Division Result:: "<<this->real<<" + i"<<this->imag<<endl;
		}
};*/
int main(void){
	double a1,b1;
	cout<<"Enter real part of first complex::";
	cin>>a1;
	cout<<"Enter complex part of first complex::";
	cin>>b1;
	Complex a(a1,b1);
	cout<<"Enter real part of second complex::";
	cin>>a1;
	cout<<"Enter complex part of second complex::";
	cin>>b1;     
	Complex b(a1,b1);     
	Complex c = a+b;
	cout<<c.real<<" + i"<<c.imag<<endl;
	c = a-b;
	cout<<c.real<<" + i"<<c.imag<<endl;
	c = a*b;
	cout<<c.real<<" + i"<<c.imag<<endl;
	c = a/b;
	cout<<c.real<<" + i"<<c.imag<<endl;
	c = -c;
	cout<<c.real<<" + i"<<c.imag<<endl;
}